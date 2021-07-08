import turtle

t = turtle.Turtle()
s = turtle.Screen()
s.bgcolor("black")
t.pencolor("green")
a = 0
b = 0
t.speed(0)
t.penup()
t.goto(0,160)
t.pendown()
while True:
    t.forward(a)
    t.right(b)
    a+=3
    b+=1
    if b==250:
        break

    t.hideturtle()
