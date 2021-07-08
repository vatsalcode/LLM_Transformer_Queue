def roman_to_integer(input):
    romans={'I':1,'V':5,'X':10,'L':50,'C':100,'D':500,'M':1000}
    sum=0
    for i in range(input):
        value=romans[input[i]]
        if i+1<len(input):
            if romans[input[i+1]]>value:
                sum-=value
        else:
            sum+=value
    return sum

print("Roman to integer conversion of")
input=input.upper()
roman_to_integer(input)

