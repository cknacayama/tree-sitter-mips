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
(float) @number
(comment) @comment
(directive) @keyword
(instruction_name) @function
(label
  name: (identifier) @label)
(operand 
  (identifier) @label)
(directive_operand
  (identifier) @label)
(memory
  (identifier) @label)
