import sys 
t=int(input()) 
for _ in range(t):
	n=int(input()) 
	l=list(map(int,input().split())) 
	maxSofar=-sys.maxsize-1
	CurrentMax=0
	#Kadane’s Algorithm
	for i in range(n):
		CurrentMax+=l[i];
		if(maxSofar<CurrentMax):
			maxSofar=CurrentMax

		if(CurrentMax<0):
			CurrentMax=0

	l.sort(reverse=True) 
	maxSubsequence=0
	for i in range(n):
		if(l[0]==0): 
			maxSubsequence=0
			break
		if(l[0]<0): 
			maxSubsequence=l[0]
			break
		if(l[i]>0): 
			maxSubsequence+=l[i]

	print(maxSofar,end=" ") 
	print(maxSubsequence)

