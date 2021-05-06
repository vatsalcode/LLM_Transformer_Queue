def step () :
    print ("Goodmorning to everyone present here")
    participants = input ('How many people are participating ?')
    teams = int(participants)/ 5
    print('The number of teams participating are',teams)

    
step()
print('Lets start the competition')
permission = input('Do you wish to proceed ?')
if permission == 'yes' or 'Yes' or 'YES' :
    print('Here is question 1')
    q1a = input ('Who is the president of India ?')
    if q1a == 'Ram Nath Kovind' :
        print('CORRECT ANSWER')
        scorecard = input('Do you want to know your score ?')
        if scorecard == 'yes' :
            print('Your score is 1')
        else :
            print ('No score input')
    else :
        print('better luck next time :(') 
else :
    print('Okay come back later')
