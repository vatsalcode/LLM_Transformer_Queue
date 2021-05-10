let
  a: int8 = 0x7F # Works
  b: uint8 = 0b1111_1111 # Works
  d = 0xFF # type is int
  c: uint8 = 256 # Compile time error

#-----------------------------
#Precedence rules are the same as in most other languages, but instead of ^, &, |, >>, <<, the xor, and, or, shr, shl operators are used, respectively.
let
  a: int = 2
  b: int = 4
echo 4/2
