const register_names = [
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
];
const register_numbers = Array.from({ length: 32 }, (_, i) => i.toString());
const floating_register_names = register_numbers.map(n => `f${n}`);

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
            delimitedBy($._item, '\n'),

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
            field('name', $.instruction_name),
            optional($.operand_list),
        ),

        instruction_name: $ => seq(
            $.identifier,
            optional(seq('.', $.identifier)),
            optional(seq('.', $.identifier)),
        ),

        directive: $ => seq(
            field('name', $.directive_name),
            delimitedBy($.directive_operand, ','),
        ),

        directive_name: $ => seq(
            '.',
            $.identifier,
        ),

        operand_list: $ => seq(
            $.operand,
            optional(seq(',', $.operand)),
            optional(seq(',', $.operand)),
        ),

        operand: $ => choice(
            $.identifier,
            $.register,
            $.immediate,
            $.memory,
        ),

        directive_operand: $ => choice(
            $.identifier,
            $.immediate,
            $.float,
            $.string,
        ),

        register: $ => seq('$', $.register_name),

        register_name: $ => choice(
            ...register_names,
            ...register_numbers,
            ...floating_register_names,
        ),

        immediate: $ => /-?[0-9]+/,
        float: $ => /-?[0-9]+\.[0-9]+/,

        string: $ => seq(
            '"',
            repeat(choice(
                token.immediate(prec(1, /[^"\\\n]+/)),
                $.escape_sequence,
            )),
            '"',
        ),

        escape_sequence: $ => /\\./,

        memory: $ => seq(
            optional(choice($.immediate, $.identifier)),
            '(',
            $.register,
            ')',
        ),

        identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,

        comment: $ => /#[^\n]*/
    },
});

function delimitedBy(rule, delimiter) {
    return optional(delimitedBy1(rule, delimiter));
}

function delimitedBy1(rule, delimiter) {
    return seq(rule, repeat(seq(delimiter, rule)));
}
