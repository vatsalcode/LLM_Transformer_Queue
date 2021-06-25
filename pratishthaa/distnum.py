def num_distinct(data):
  if len(data) == len(set(data)):
    return True
  else:
    return False;
print(num_distinct([2,5,8,9]))
print(num_distinct([2,4,4,5,7,8]))
