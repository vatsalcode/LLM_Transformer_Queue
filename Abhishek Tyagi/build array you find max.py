class Solution:
    def numOfArrays(self, n: int, m: int, k: int) -> int:
    	mod=1000000007

    	if k==0:
    		return 0

    	dp=[]
    	for _ in range(m):
    		dp.append([0]*k-1+[1]) 

    	for _ in range(n-1):
    		new_dp=[]
    		for _ in range(m):
    			new_dp.append([0]*k) 
    		for i in range(m):
    			for j in range(k):

    				new_dp[i][j] += dp[i][j]*(i+1)

    				if j<k-1:

    					for x in range(i):
    						new_dp[i][j]+=dp[x][j+1]

    				new_dp[i][j] = new_dp[i][j]%mod

    		dp=new_dp

    	ans=sum(a[0] for a in dp)
    	for a in dp:
    		ans+=a[0]
    	return ans%mod
