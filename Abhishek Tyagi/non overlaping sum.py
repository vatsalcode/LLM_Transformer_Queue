

class Solution:
    def eraseOverlapIntervals(self, intervals: List[List[int]]) -> int:
        intervals.sort(key=lambda interval: interval[1])
        ending = None
        count = 0
        for s, e in intervals:
            if ending is None or ending <= s:
                ending = e
            else:
                count += 1
        
        return count
