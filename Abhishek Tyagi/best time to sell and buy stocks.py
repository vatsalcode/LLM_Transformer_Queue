class Solution:
    def maxProfit(self, prices: List[int], fee: int) -> int:
        profit=0
        holding=-prices[0]
        for i in range(1,len(prices)):
            profit=max(profit,holding+prices[i]-fee)
            holding=max(holding,profit-prices[i])
        return profit
