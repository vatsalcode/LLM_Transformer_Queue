
import bisect
t=int(input())
for _ in range(t):
	n,m=map(int,input().split())
	l=list(map(int,input().split()))
	maxi=0
	prefixSum=0
	SortedPrefix=[]
	for i in range(n):
		prefixSum=(prefixSum+l[i])%m 
		maxi=max(maxi,prefixSum) 
		index=bisect.bisect_right(SortedPrefix,prefixSum)
		if index<len(SortedPrefix): 
			maxi=max(maxi,(prefixSum-SortedPrefix[index]+m)%m)

		bisect.insort(SortedPrefix,prefixSum) 

	print(maxi)
