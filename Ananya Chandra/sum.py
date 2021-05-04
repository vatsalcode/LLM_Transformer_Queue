prices=map(int,input().split())
s=0
for item in prices:
    s+=item
print(f"total {s}")
