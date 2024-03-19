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
(register_name) @variable.builtin
(immediate) @number
(float) @number
(comment) @comment
(directive_name) @keyword
(instruction_name) @function
(label
  name: (identifier) @label)
(operand 
  (identifier) @label)
(directive_operand
  (identifier) @label)
(memory
  (identifier) @label)
