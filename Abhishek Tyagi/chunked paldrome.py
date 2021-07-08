

class Solution(object):
    def longestDecomposition(self, text):
        lens = len(text)
        left = 0
        right = lens - 1
        count = 0        
        temp = 0
        while left < right:        
            if left + temp > right - temp:
                    count += 1
                    break
            if text[left: left + temp + 1] == text[right - temp: right + 1]:
                
                if left == right - temp:
                    count += 1
                    break
                else:
                    count += 2
                    left = left + temp + 1
                    right = right - temp - 1
                    temp = 0
            else:
                temp += 1

        if left == right:
            count += 1
        return count
