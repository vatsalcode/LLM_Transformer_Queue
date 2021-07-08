def is_leap(year) -> bool:
    leap: bool
    if year % 400 == 0:
        leap = True
    elif year % 100 == 0 and year % 400 != 0:
        leap = False
    elif year % 100 != 0 and year % 4 == 0:
        leap = True
    else:
        leap = False
    return leap


year = int(input("Enter the year:\n"))
print(is_leap(year))
