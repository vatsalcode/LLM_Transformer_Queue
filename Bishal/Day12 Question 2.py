def harshad(n):
    c = 0
    temp = n
    while n != 0:
        d = n % 10
        c += d
        n //= 10
    if temp % c == 0:
        print(f"{temp} is a Niven or Harshad Number.")
    else:
        print(f"{temp} is not a Niven or Harshad Number.")


harshad(int(input("Enter the number for niven check: ")))
