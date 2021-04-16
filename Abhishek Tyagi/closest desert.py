class Solution(object):
    def closestCost(self, baseCosts, toppingCosts, target):
       
        max_count = 2
        def backtracking(toppingCosts, i, cost, target, lookup, result):
            if (i, cost) in lookup:
                return
            lookup.add((i, cost))
            if cost >= target or i == len(toppingCosts):
                if (abs(cost-target), cost) < (abs(result[0]-target), result[0]):
                    result[0] = cost
                return
            for j in xrange(max_count+1):
                backtracking(toppingCosts, i+1, cost+j*toppingCosts[i], target, lookup, result)

        result = [float("inf")]
        lookup = set()
        for b in baseCosts:
            backtracking(toppingCosts, 0, b, target, lookup, result)
        return result[0]
      

