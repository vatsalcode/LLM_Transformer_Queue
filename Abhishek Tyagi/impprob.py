def palindrome(s):
    count  = 0
    for i in range(len(s)):
        if s[i] == s[len(s)-i-1]:
            count += 1
    return count == len(s) or count == len(s) - 1

def anagramNaive(s1, s2): 
    return sorted(s1) == sorted(s2) if len(s1) == len(s2) else False

def anagram(s1, s2):
    if len(s1) == len(s2):
        u1 = set(s1); u2 = set(s2)
        if u1 == u2:
            del u2
            d = dict(zip(u1, [0]*len(u1)))
            for i in range(len(s1)):
                d[s1[i]] += 1
                d[s2[i]] -= 1
            return all([d[i] == 0 for i in d])
        else:
            return False
    else:
        return False
def leftMostRepeatingCharNaive(s):
    for i in range(len(s)):
        if s[i] in s[i+1:]:
            return i
    return -1

def leftMostRepeatingChar(s):
    d = dict.fromkeys(s)
    d = dict(zip(d.keys(), [0]*len(d)))
    if len(d) == len(s):
        return -1
    else:
        for i in d:
            if s.count(i) > 1: # O(n)
                return s.index(i)
def leftMostNonRepeatingChar(s):
    d = dict.fromkeys(s)
    d = dict(zip(d.keys(), [0]*len(d)))
    for i in d:
        if s.count(i) == 1:  
            return s.index(i)
    return -1

def reverseWords(s):
    s = s.split(" ")[::-1]
    return " ".join(s)

def checkRotNaive(s1, s2):
    leftrot = s1; rightrot = s1
    for _ in range(len(s1)):
        leftrot = leftrot[1:] + leftrot[0]
        rightrot = rightrot[-1] + rightrot[:-1]
        if leftrot == s2 or rightrot == s2:
            return True
    return False

checkRot = lambda s1, s2: s2 in s1*2

def anagramSearchNaive(txt, pat):
    for i in range(len(txt) - len(pat) + 1): 
        if anagram(txt[i:i+len(pat)], pat):
            return True
    return False

def anagramSearch(txt, pat):

    count_txt = [0]*256
    count_pat = [0]*256 

    for i in range(len(pat)):
        count_txt[ord(txt[i])] += 1
        count_pat[ord(pat[i])] += 1
    
    for i in range(len(pat), len(txt)):
        if count_txt == count_pat:
            print("Found at, ", i - len(pat))

        count_txt[ord(txt[i])] += 1
        count_txt[ord(txt[i - len(pat)])] -= 1
        
    if count_txt == count_pat:
        print("Found at, ", len(txt)-len(pat))

def LSwDCnaive(s):
    subs = []
    for i in range(len(s)):
        for j in range(i+1, len(s)+1):
            subs.append(s[i:j])

    res = ""
    for sub in subs:
        if len(set(sub)) == len(sub) and len(sub) >= len(res):
            res = sub
    return res

def longestSubstrDistinct(s):
    maxEnd = 1 
    sub = s[0]; res = -1
    for i in range(1,len(s)):

        if s[i] not in sub:
            sub = sub + s[i]
            maxEnd += 1
        else:
            prev_idx = 0
            for j in range(len(sub)):
                if s[i] == sub[j]:
                    prev_idx = j

            maxEnd = i - prev_idx + 1

        res = max(res, maxEnd)
    return res

