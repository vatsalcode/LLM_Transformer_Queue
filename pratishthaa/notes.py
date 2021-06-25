def no_note(a):
  Qn = [500, 200, 100, 50, 20, 10]
  i = 0
  for j in range(6):
    q = Qn[j]
    i += int(a / q)
    a = int(a % q)
  if a > 0:
    i = -1
  return i
print(no_note(880))
print(no_note(1000))
