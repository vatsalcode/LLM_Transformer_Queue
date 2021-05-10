class Solution:
    @lru_cache(maxsize=None)
    def isScrambleHelper(self, l1, r1, l2, r2):
        assert(0 <= l1 and l1 <= r1 and r1 <= len(self.target) - 1)
        assert(0 <= l2 and l2 <= r2 and r2 <= len(self.target) - 1)
        assert(r1 - l1 == r2 - l2)
        
        areEqual = self.start[l1:r1+1] == self.target[l2:r2+1]
        
        if areEqual:
            return True
        
        if l1 == r1:
            return areEqual
			
	   for splitOff in range(r1 - l1):
            answerLeftLeft = self.isScrambleHelper(
                l1, l1 + splitOff,
                l2, l2 + splitOff
            )
            
            if answerLeftLeft:
                answerRightRight = self.isScrambleHelper(
                    l1 + splitOff + 1, r1,
                    l2 + splitOff + 1, r2
                )

                if answerRightRight:
                    return True
            
            answerLeftRight = self.isScrambleHelper(
                l1, l1 + splitOff,
                r2 - splitOff, r2
            )
            
            if not answerLeftRight:
                continue
			
			
            answerRightLeft = self.isScrambleHelper(
                l1 + splitOff + 1, r1,
                l2, r2 - splitOff - 1
            )
            
            if answerRightLeft:
                return True

        return False

    def isScramble(self, s1: str, s2: str) -> bool:
        assert(len(s1) == len(s2)) 
        self.start = s1
        self.target = s2
        return self.isScrambleHelper(0, len(s1) - 1, 0, len(s1) - 1)
