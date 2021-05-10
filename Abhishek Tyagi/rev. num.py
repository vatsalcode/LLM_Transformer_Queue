

class Solution:
    def reverse(self, x: int) -> int:        
        result = 0
        
        is_negative = False
        if x < 0:
            is_negative = True
            x = -x
        
        while x > 0:            
            result = result * 10 + x % 10
            x = x // 10
        
        if result > 2**31 - 1 or result < -2**31:
            return 0
        
        if is_negative:
            result = -result
        
        return result


