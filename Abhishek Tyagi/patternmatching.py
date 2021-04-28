def patternMatchingNaive(text, pat):
    n = len(text)
    m = len(pat)
    for i in range(n-m+1):  
        if text[i:i+m] == pat: 
            print(i)

def RabinKarpAlgorithm(text, pat):
    n = len(text)
    m = len(pat)
    patHashVal = 0
    for i in pat:
        patHashVal += ord(i)

    rollingHashWindow = 0
    for i in text[:m]:
        rollingHashWindow += ord(i)

    for i in range(m, n):
        if rollingHashWindow == patHashVal:
            if text[i-m:i] == pat:
                print(i-m)
        rollingHashWindow += ord(text[i]) - ord(text[i-m])

def lpsNaive(s):
    lps_array = []
    for i in range(len(s)):
        sub = s[:i+1]  # O(n)
        ppfx = []
        sfx = [""]
        uniq = []
        for j in range(len(sub)):  
            ppfx.append(sub[:j])
        for j in range(len(sub)):
            sfx.append(sub[j:])
        for j in ppfx:  
            if j in sfx:  
                uniq.append(j)
        lps_array.append(len(max(uniq)))
    return lps_array

def LPScompute(s):
    lps_array = [0]
    for i in range(1, len(s)): # O(n)
        if s[i] == s[lps_array[i-1]]:
            lps_array.append(lps_array[i-1] + 1)
        else:
            lps_array.append(0)
    return lps_array

def KMPSearch(pat, txt):
    M = len(pat)
    N = len(txt)
    lps = LPScompute(pat)
    j = 0  
    i = 0  
    while i < N:
        if pat[j] == txt[i]:
            i += 1
            j += 1
        if j == M:
            print("Found pattern at index " + str(i-j))
            j = lps[j-1]

        elif i < N and pat[j] != txt[i]:
            if j != 0:
                j = lps[j-1]
            else:
                i += 1
