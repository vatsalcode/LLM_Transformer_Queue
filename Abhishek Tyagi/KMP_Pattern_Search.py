def KMP_pattern_search(pattern, text):
    P = len(pattern)
    Q = len(text)

    long_prefix_suffix = [0]*P

    j=0

    long_Prefix_Suffix_Array(pattern, P, long_prefix_suffix)

    i=0

    while i < Q:
        if pattern[j] == text[i]:
            i += 1
            j += 1

        if j == P:
            print("Pattern found at index " + str(i-j))
            j=long_prefix_suffix[j-1]

        # mismatch after j matches
        elif i < Q and pattern[j] != text[i]:
            if j != 0:
                j=long_prefix_suffix[j-1]
            else:
                i += 1

def long_Prefix_Suffix_Array(pattern, P, long_prefix_suffix):
    l=0
    long_prefix_suffix[0]=0
    i=1

    while i < P:
        if pattern[i] == pattern[l]:
            l += 1
            long_prefix_suffix[i] = l
            i += 1
        else:
            if l != 0:
                l=long_prefix_suffix[l-1]
            else:
                long_prefix_suffix[i] = 0
                i += 1

text = "ABABDABACDABABCABAB"
pattern = "ABABCABAB"
KMP_pattern_search(pattern, text)
    
