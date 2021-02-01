type
  Dollars* = distinct float

var a = 20.Dollars
a = 25  # Doesn't compile
a = 25.Dollars  # Works fine
