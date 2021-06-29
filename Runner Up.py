from collections import Counter
if __name__ == '__main__':
    n = int(raw_input())
    arr = Counter(map(int, raw_input().split())).keys()
    arr.sort()
    print arr[-2]
