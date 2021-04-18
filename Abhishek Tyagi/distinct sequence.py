def distinctSubseqII(self, S: str) -> int:
        MOD = 10 ** 9 + 7
     
        dp = [[0] * (len(S)) for _ in range(len(S) + 1)]  
        
        
        
        seen = set() 
        for i in range(len(S)):
            if S[i] not in seen:
                dp[1][i] = 1
                seen.add(S[i])
        
        for l in range(1, len(S)):
            for i in range(l - 1, len(S)):
                seen = set()
                for j in range(i + 1, len(S)):
                    if S[j] not in seen:
                        dp[l + 1][j] += dp[l][i]
                        seen.add(S[j])
        
        return sum(sum(row) for row in dp) % MOD
