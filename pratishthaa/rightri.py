print("Enter 3 integers(sides of triangle)")
int_num = list(map(int,input().split()))
x,y,z = sorted(int_num)
if x**2+y**2==z**2:
    print('YES')
else:
    print('NO')
