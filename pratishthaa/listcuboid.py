listc=[]
x = int(raw_input())
y = int(raw_input())
z = int(raw_input())
n = int(raw_input())
for i in range(0,x+1):
    for j in range(0,y+1):
        for k in range(0,z+1):
            if i+j+k != n:
                listc.append([i,j,k])
print(listc)
