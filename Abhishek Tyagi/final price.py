
#Python program for Final Prices With a Special Discount in a Shop
class Solution:
    def finalPrices(self, prices: List[int]) -> List[int]:
       
        n = len(prices)
        for i in range(n - 1):
	        j = i
	        while j < n - 1:
		        j += 1
		        if prices[j] <= prices[i]:
			        prices[i] -= prices[j]
			        break
        return prices

        
