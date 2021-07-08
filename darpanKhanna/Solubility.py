T=int(input())
for i in range(T):
    X,A,B=map(int,input().split())
    ans=((A+(100-X)*B)*1000)//100
    print(ans)
