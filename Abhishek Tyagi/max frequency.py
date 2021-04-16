class Solution:
    def subarraysWithKDistinct(self, A: 'List[int]', K: 'int') -> 'int':
        far, near, ans, maps = 0, 0, 0, {}
        
        for item in A:
            maps[item] = maps.get(item,0) + 1
            if len(maps) >K:
                del maps[A[near]]
                near += 1
                far = near
            if len(maps) == K:
                while maps[A[near]] > 1:
                    maps[A[near]] -= 1
                    near += 1
                ans += near - far + 1
        return ans
