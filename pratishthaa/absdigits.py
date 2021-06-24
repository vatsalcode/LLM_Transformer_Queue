def ab_digit(n):
  all_num = set([0,1,2,3,4,5,6,7,8,9])
  n = set([int(i) for i in n])
  n = n.symmetric_difference(all_num)
  n = sorted(n)
  return n
print(ab_digit([9,8,3,2,2,0,9,7,6,3]))
