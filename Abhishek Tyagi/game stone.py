
class Solution(object):
    def winnerSquareGame(self, n):
        optimal_play = [ False for _ in range(n+1) ]
        
        for number in range(1, n+1):
            
            optimal_play[number] = not all( optimal_play[number-i**2] for i in range(1, int(number**0.5)+1 ))
        
        
        return optimal_play[n]

        
