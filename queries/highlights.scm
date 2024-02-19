[
  "," 
  ":"
  "$"
] @punctuation.delimiter

[
  "(" 
  ")" 
] @punctuation.bracket

[
  (string)
  "\""
] @string

(escape_sequence) @string.escape
(register) @variable.builtin
(immediate) @number
(comment) @comment
(directive) @keyword
(instruction
  name: (identifier) @function)
(label
  name: (identifier) @label)
(operand 
  label: (identifier) @label)
(directive_operand
  label: (identifier) @label)
