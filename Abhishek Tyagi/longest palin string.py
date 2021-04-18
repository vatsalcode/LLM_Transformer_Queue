class Solution:
    def longestPalindrome(self, s: str) -> str:
        result = ""
        
        for i in range(len(s)):
            word1 = self.checkPalindrome(s, i, i)
            word2 = self.checkPalindrome(s, i, i+1)
            
            word1 = word1 if len(word1) >= len(word2) else word2 
            
            result = word1 if len(word1) >= len(result) else result
            
        return result
    
    def checkPalindrome(self, s, lo, hi):
        while lo>=0 and hi<len(s) and s[lo]==s[hi]:
            lo -= 1
            hi += 1
        
        return s[lo+1:hi]
