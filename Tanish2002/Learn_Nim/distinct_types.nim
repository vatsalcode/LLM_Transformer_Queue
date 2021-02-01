type
  Dollars* = distinct float

var a = 20.Dollars
a = 25  # Doesn't compile
a = 25.Dollars  # Works fine

#--------------------------------------------------------------

proc `*` *(a, b: Dollars): Dollars {.borrow.}
proc `+` *(a, b: Dollars): Dollars {.borrow.}
a = 20.Dollars * 20.Dollars
