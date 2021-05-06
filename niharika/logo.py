import turtle
get_screen = turtle.Screen()
shine = turtle.Turtle()


for yy in ['pink','blue','orange','black']:
    shine.color(yy)
    shine.forward(100)
    shine.left(90)
    shine.forward(50)
    shine.circle(20)
get_screen.exitonclick()
