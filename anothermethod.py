def is_leap(year):
    leap = False
    
    # Write another your logic here
    if year % 4 == 0:
        if year % 100 == 0 and year % 400 != 0:
            return False
        else:
            return True
    else:
        return False
    
    return leap
