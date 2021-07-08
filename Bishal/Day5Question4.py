#Name: John Wick
#Name in short form: J.Wick
import pyttsx3


def short():
    f = 0
    x = 0
    while f == 0:
        f = int(input("Do you have any middle name: \n(\Enter 0 for Yes or 1 for No)\n"))
        if f != 0 and f != 1:
            converter = pyttsx3.init()
            converter.setProperty('rate', 180)
            converter.setProperty('voice', 'english_rp+f3')
            converter.say("Sorry, did not get you!")
            converter.runAndWait()
            converter.stop()
            f = 0
        else:
            x = f
            break
    fname = input("Enter your first name:\n")
    mn = ''
    if x == 0:
        mn = input("Enter your middle name:\n")
    lname = input("Enter your last name:\n")
    if x == 0:
        print(f"\nYour Name:\n{fname.lower().title()} {mn.lower().title()} {lname.lower().title()}")
        print(f"Name in short form:\n{fname[0].upper()}.{mn[0].upper()}.{lname.lower().title()}")

    else:
        print(f"\nYour Name:\n{fname.lower().title()} {lname.lower().title()}")
        print(f"Name in short form:\n{fname[0].upper()}.{lname.lower().title()}")


short()
