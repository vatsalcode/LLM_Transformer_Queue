numbers={
    0:"zero ",
    1:"one ",
    2:"two ",
    3:"three ",
    4:"four ",
    5:"five ",
    6:"six ",
    7:"seven ",
    8:"eight ",
    9:"nine "
}
value= input("Phone:")
s=""
for i in value:
    s=s+numbers[int(i)]
print(s)
