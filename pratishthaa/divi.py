def divi(n):
  for i in range(n):
    x = len([i for i in range(1,n+1) if not n % i])
  return x
print(divi(15))
print(divi(12))
print(divi(9))
print(divi(6))
print(divi(3))
