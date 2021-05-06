#reverse the order of first k elements of a queue of integers 
n=int(input("Enter the size of queue\n"))
K=int(input("Enter the no. of elements to be reversed\n"))
a=[]
ans=[]
print("Enter the integer elements")
for i in range(n):
    a.append(int(input()))
i=0
while i<K//2:
    t=a[i]
    a[i]=a[K-1-i]
    a[K-1-i]=t
    i+=1
print(a)

