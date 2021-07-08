
class Solution(object):
    def kthSmallestPrimeFraction(self, A, K):
        def count_smaller_fractions(x):     

            count, denominator, largest = 0, 1, [0, 1]

            for numerator in range(len(A) - 1):     

                while denominator < len(A) and A[numerator] >= x * A[denominator]:  
                    denominator += 1

                if denominator != len(A) and A[numerator] * largest[1] > largest[0] * A[denominator]:
                    largest = [A[numerator], A[denominator]]                        

                count += len(A) - denominator     

            return count, largest

        low, high = 0, 1.0
        while high - low > 10 ** -9:

            mid = (low + high) / 2
            count, largest = count_smaller_fractions(mid)
            if count < K:           
                low = mid
            else:                   
                result = largest    
                high = mid

        return result
