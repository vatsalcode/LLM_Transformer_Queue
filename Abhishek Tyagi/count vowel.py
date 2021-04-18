
class Solution(object):
    def countVowelPermutation(self, n):

        counts = {vowel: 1 for vowel in "aeiou"}    

        for _ in range(n - 1):
            new_counts = {}
            new_counts["a"] = counts["e"] + counts["i"] + counts["u"]
            new_counts["e"] = counts["a"] + counts["i"]
            new_counts["i"] = counts["e"] + counts["o"]
            new_counts["o"] = counts["i"]
            new_counts["u"] = counts["i"] + counts["o"]
            counts = new_counts

        return sum(counts.values()) % (10 ** 9 + 7)
