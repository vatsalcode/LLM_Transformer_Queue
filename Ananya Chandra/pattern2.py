#print the given pattern
# 1
# 2 3
# 4 5 6
# 7 8 9 10
t=1
for i in range(1,5):# number of rows known - 4
    for j in range(1,i+1):
        print(t, end=" ")
        t+=1
    print()
