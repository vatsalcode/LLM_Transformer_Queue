
#made snake game, play with arrow keys

import curses
from random import randint


curses.initscr()
win=curses.newwin(50,100,0,0)
curses.noecho()

curses.curs_set(0)

win.keypad(1)
win.border(0)
win.nodelay(1)


snake=[(4,10),(4,9),(4,8)]
food=(10,20)
ESC=27
key=curses.KEY_RIGHT
score=0

win.addch(food[0],food[1],"$",curses.A_BOLD)
while key!=ESC:
    win.addstr(0,10,"SNAKE GAME ",curses.A_STANDOUT)
    win.addstr(0,75,"Score="+ str(score)+ " ",curses.A_STANDOUT)
    win.timeout(100)

    prev_key=key
    event=win.getch()
    key=event if event != 1 else prev_key

    if key not in [curses.KEY_LEFT,curses.KEY_RIGHT,curses.KEY_UP,curses.KEY_DOWN,ESC]:
        key=prev_key
    
    y=snake[0][0]
    x=snake[0][1]
    

    if key==curses.KEY_DOWN:
        y+=1
    if key==curses.KEY_UP:
        y-=1
    if key==curses.KEY_LEFT:
        x-=1
    if key==curses.KEY_RIGHT:
        x+=1
    snake.insert(0,(y,x))

    if y==0: 
        flag=1
        break
    if x==0:
        flag=1
        break
    if x==99: 
        flag=1
        break 
    if y==49: 
        flag=1
        break

    if snake[0] in snake[1:]: 
        flag=2
        break

    if snake[0]==food:
        score+=1
        food =()
        while food ==():
            food=(randint(1,48), randint(1,98))
            if food in snake:
                food = ()
        win.addch(food[0],food[1],"$",curses.A_BOLD)
    else:
        last=snake.pop()
        win.addch(last[0],last[1]," ")
    win.addch(snake[0][0], snake[0][1],"O",curses.A_BLINK)
  
curses.beep
curses.endwin()

if (flag==1):
    print("OOPS, You hit the wall!!")
else :
    print("OOPS, You ate yourself!!")
print(f"Your Score is= {score} ^_^")
