lines = int(input())
for _ in range(lines):
    a, b = input().split()
    try:
        print(int(a)//int(b))
    except (ZeroDivisionError, ValueError) as e:
        print("Error Code:", e)
