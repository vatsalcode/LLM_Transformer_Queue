def isInterleaving(string_A, string_B, string_C):
    if(len(string_C) != len(string_A) + len(string_B)): return False
    
    dp = [None] * (len(string_B) + 1)
    
    for i in range(len(string_A) + 1):
        for j in range(len(string_B) + 1):
            if(i == 0 and j == 0):
                dp[j] = True
            elif(i == 0):
                dp[j] = dp[j - 1] and string_B[j - 1] == string_C[j - 1]
            elif(j == 0):
                dp[j] = dp[j] and string_A[i - 1] == string_C[i - 1]
            else:
                dp[j] = ((dp[j] and string_A[i - 1] == string_C[i + j - 1]) or (dp[j - 1] and string_B[j - 1] == string_C[i + j - 1]))
	
    	
    return dp[len(string_B)]

string_A = input("Enter string A")
string_B = input("Enter string B")
string_C = input("Enter string C")

result = isInterleaving(string_A, string_B, string_C)

if(result):
	print("String C is interleaving String A and String B")
else:
	print("String C is not interleaving String A and String B")
