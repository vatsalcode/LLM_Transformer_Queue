Secret_no=9
Count=0
c=0
while Count<3:
    guess=int(input("your guess "))
    if guess==Secret_no:
        print("You Win!")
        break
    else:
        c=1
    Count+=1
if c==1:
    print("You Lose!")
