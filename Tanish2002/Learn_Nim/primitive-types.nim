let
  a: int8 = 0x7F # Works
  b: uint8 = 0b1111_1111 # Works
  d = 0xFF # type is int
  c: uint8 = 256 # Compile time error
