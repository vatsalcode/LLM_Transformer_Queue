import turtle
get_screen = turtle.Screen()
get_screen.bgcolor("yellow")

ricky = turtle.Turtle()
ricky.pensize(10)

rana = turtle.Turtle()
rana.pensize(5)
rana.color("hotpink")

ricky.forward(150)
ricky.circle(30)
ricky.left(90)
ricky.clearstamp(34)
ricky.forward(200)

rana.forward(100)
rana.circle(50)
rana.left(56)
rana.forward(250)
rana.begin_fill()
rana.circle(60)
rana.end_fill()

ricky.left(90)
ricky.forward(100)
ricky.circle(100)
ricky.forward(300)
ricky.color("black","blue")
ricky.begin_fill()
ricky.circle(60)
ricky.end_fill()
