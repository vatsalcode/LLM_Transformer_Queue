
def largestRectangle(h):
    max_area = 0
    for i in range(len(h)):
        cnt = 0
        for j in range(i, -1, -1):
            if h[j] >= h[i]:
                cnt += 1
            else:
                break
        for k in range(i+1, len(h)):
            if h[k] >= h[i]:
                cnt += 1
            else:
                break
        area = h[i] * cnt
        if area > max_area:
            max_area = area

    print (max_area)

n = int(input())
h = [int(x) for x in input().split(" ")]
largestRectangle(h)
