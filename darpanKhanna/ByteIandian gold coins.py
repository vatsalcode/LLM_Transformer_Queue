coins_dict = {}
def coins(num):
    if num<12:
        return num
    elif num in coins_dict:
        return coins_dict[num]
    else:
        coins_dict[num]  = coins(num//4)+coins(num//3)+coins(num//2)
        return coins_dict[num]

while  True:
    try:
        print(coins(int(input())))
    except:
        break
