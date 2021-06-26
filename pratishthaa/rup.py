n = int(raw_input())
rup = list(map(int, raw_input().split()))
x=max(rup)
while max(rup)==x:
    rup.remove(max(rup))
print max(rup)
