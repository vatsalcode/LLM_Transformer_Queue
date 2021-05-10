proc fibonacci(n: int): int =
  if n < 2:
    result = n
  else:
    result = fibonacci(n - 1) + (n - 2).fibonacci


# module1:
proc foo*(): int = 2
proc bar(): int = 3

# module2:
echo foo()  # Valid
echo bar()  # will not compile



proc sum(x, y: int): int {. noSideEffect .} =
  x + y

proc minus(x, y: int): int {. noSideEffect .} =
  echo x  # error: 'minus' can have side effects
  x - y



proc `$`(a: array[2, array[2, int]]): string =
  result = ""
  for v in a:
    for vx in v:
      result.add($vx & ", ")
    result.add("\n")

echo([[1, 2], [3, 4]])  # See varargs for
                        # how echo works

proc `^&*^@%`(a, b: string): string =
  ## A confusingly named useless operator
  result = a[0] & b[high(b)]

assert("foo" ^&*^@% "bar" == "fr")



# Not really good idea for obvious reasons
let zero = ""
proc `+`(a, b: string): string =
  a & b

proc `*`[T](a: T, b: int): T =
  result = zero
  for i in 0..b-1:
    result = result + a  # calls `+` from line 3

assert("a" * 10 == "aaaaaaaaaa")
