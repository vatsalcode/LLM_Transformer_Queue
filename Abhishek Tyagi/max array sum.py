

def maxSubsetSum(arr):
    
    n = len(arr) 
    dp = [0]*n   
    dp[0] = arr[0] # base
    dp[1] = max(arr[1], dp[0]) 
    
    for i in range(2,n):
        dp[i] = max(arr[i], dp[i-1], arr[i] + dp[i-2])
    return dp[-1]
