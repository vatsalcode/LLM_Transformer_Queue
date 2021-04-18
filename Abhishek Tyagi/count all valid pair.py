

class Solution:
    def countOrders(self, n: int) -> int:
        modulo = 1e9 + 7
        ret = 1
        for i in range(2, n + 1):
            ret = ret * (i * 2 - 1) * i % modulo
        return int(ret)
