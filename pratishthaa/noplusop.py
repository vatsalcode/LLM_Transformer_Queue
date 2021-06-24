def add_wo_plus(a, b):
    while b != 0:
        data = a & b
        a = a ^ b
        b = data << 1
    return a
print(add_wo_plus(2, 10))
print(add_wo_plus(-20, 10))
print(add_wo_plus(-10, -20))
