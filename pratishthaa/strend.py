def str_both_ends(str):
  if len(str) < 2:
    return ''

  return str[0:2] + str[-2:]

print(str_both_ends('pratishtha'))
print(str_both_ends('shruti'))
print(str_both_ends('dk'))
