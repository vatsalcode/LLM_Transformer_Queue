import turtle
get_screen = turtle.Screen()
shine = turtle.Turtle()

distance = 100
angle = 90
shine.color("pink","purple")
shine.pensize(20)
for sks in range(20):
    shine.forward(distance)
    shine.right(angle)
    distance = distance + 20
