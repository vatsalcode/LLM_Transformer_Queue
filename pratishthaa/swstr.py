def char_mixup(a, b):
  nw_a = b[:2] + a[2:]
  nw_b = a[:2] + b[2:]

  return nw_a + ' ' + nw_b
print(char_mixup('def', 'ghi'))
