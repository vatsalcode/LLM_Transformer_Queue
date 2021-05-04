i=""
str=False
while True:
    i = input(">").lower()
    if i=="help":
        print("""
start- to start the car
stop - to stop the car
quit- to exit game""")
    elif i=="start":
        if not str:
            print(" Car started ...Ready to go")
            str = True
        else:
            print("car already started")
    elif i=="stop":
        if str:
            print("Car stopped.")
            str=False
        else:
            print("car already stopped")
    elif i =="quit":
        break
    else:
        print("I don't understand that ...")
