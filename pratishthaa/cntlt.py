def lt_cnt_4(nums):
  cnt = 0  
  for num in nums:
    if num == 4:
      cnt = cnt + 1

  return cnt

print(lt_cnt_4([1, 4, 6, 7, 4]))
print(lt_cnt_4([1, 4, 6, 4, 7, 4]))
