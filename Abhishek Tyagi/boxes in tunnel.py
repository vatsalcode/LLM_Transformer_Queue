


t= int(input())                             

for i in range(t):
    a = list(map(int, input().split()))     
    if a[2] < 41:                           # Printing the volume if height of the box is less than 41
        print(a[0]*a[1]*a[2])
