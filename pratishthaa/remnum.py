def rem_num(int_lt):
  pos = 3 - 1 
  idx = 0
  len_lt = (len(int_lt))
  while len_lt>0:
    idx = (pos+idx)%len_lt
    print(int_lt.pop(idx))
    len_list -= 1
num = [10,20,30,40,50,60,70,80,90]
rem_num(num)
