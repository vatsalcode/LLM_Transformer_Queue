
def is_leapp(year):
    leapp = False
    if(year % 4 == 0) :
        if(year % 100 ==0) and (year % 400 ==0):
            leapp=True
    else :
        leapp=False
    # Write your logic  here
    
    return leapp
