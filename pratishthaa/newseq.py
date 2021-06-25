def ne_seq(n):
    if n==1 or n==2 or n==3 or n==4:
        return 1
    return ne_seq(n-1) + ne_seq(n-2) + ne_seq(n-3) + ne_seq(n-4)
print(ne_seq(5))
print(ne_seq(6))
print(ne_seq(7))
