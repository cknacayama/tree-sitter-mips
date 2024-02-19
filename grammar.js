module.exports = grammar({
    name: 'mips',

    inline: $ => [
        $._item,
    ],

    extras: $ => [
        $.comment,
        /\s/,
    ],

    rules: {
        source_file: $ =>
            delimitedBy($._item, repeat1('\n')),

        _item: $ => choice(
            $.label,
            $.instruction,
            $.directive,
        ),

        label: $ => seq(
            field('name', $.identifier),
            ':',
            optional($._item),
        ),

        instruction: $ => seq(
            field('name', $.identifier),
            delimitedBy($.operand, ','),
        ),

        directive: $ => seq(
            '.',
            field('name', $.identifier),
            delimitedBy($.directive_operand, ','),
        ),

        operand: $ => choice(
            field('label', $.identifier),
            $.register,
            $.immediate,
            $.memory,
        ),

        directive_operand: $ => choice(
            field('label', $.identifier),
            $.immediate,
            $.string,
        ),

        register: $ => seq('$', $.register_name),

        register_name: $ => choice(
            'zero',
            'at',
            'v0', 'v1',
            'a0', 'a1', 'a2', 'a3',
            't0', 't1', 't2', 't3', 't4', 't5', 't6', 't7', 't8', 't9',
            's0', 's1', 's2', 's3', 's4', 's5', 's6', 's7',
            'k0', 'k1',
            'gp',
            'sp',
            'fp',
            'ra',
        ),

        immediate: $ => seq(
            optional('-'),
            /[0-9]+/,
        ),

        string: $ => seq(
            '"',
            repeat(choice(
                token.immediate(prec(1, /[^"\\\n]+/)),
                $.escape_sequence,
            )),
            '"',
        ),

        escape_sequence: $ => token.immediate(/\\./),

        memory: $ => seq(
            choice($.immediate, field('label', $.identifier)),
            '(',
            $.register,
            ')',
        ),

        identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,

        comment: $ => token(seq(
            '#',
            /[^\n]*/
        )),
    },
});

function delimitedBy(rule, delimiter) {
    return optional(delimitedBy1(rule, delimiter));
}

function delimitedBy1(rule, delimiter) {
    return seq(rule, repeat(seq(delimiter, rule)));
}
