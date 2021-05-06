import pyttsx3


def diction1():
    cl = {'Students': ['Rita', 'Ed', 'Anne', 'Taylor', 'Lee', 'John'], 'Gender' : ['F', 'M', 'F', 'F', 'M', 'M']}
    c = pyttsx3.init()
    #rate1 = c.getProperty('rate')
    c.setProperty('rate', 140)
    c.setProperty('voice', 'english_rp+f4')
    c.say("Our students:")
    c.runAndWait()
    c.stop()
    for k in range(len(cl['Students'])):
        print(f"{k+1}. Student Name: {cl['Students'][k]}\n   Gender: {cl['Gender'][k]}")


def diction(m, n):
    cl = {'Students': ['Rita', 'Ed', 'Anne', 'Taylor', 'Lee', 'John'], 'Gender': ['F', 'M', 'F', 'F', 'M', 'M'], m: n}

    c = pyttsx3.init()
    #r = c.getProperty('rate')
    c.setProperty('rate', 150)
    c.setProperty('voice', 'english_rp+f5')
    c.say(f"After insertion of the attribute {m}:")
    c.runAndWait()
    for k in range(len(cl['Students'])):
        print(f"{k + 1}. Student Name: {cl['Students'][k]}\n   Gender: {cl['Gender'][k]}\n   {m}: {cl[m][k]}")


diction1()
key1 = input("Enter the attribute that you wanna add to the students' database: \n1.Height(Enter H for that)\n2.Weight(Enter W for that)\n")
height = [5.7, 5.8, 5.7, 5.75, 6.01, 6.2]
weight = [55, 68, 59, 59, 62, 64]
if key1 == 'H':
    diction('Height', height)
elif key1 == 'W':
    diction('Weight', weight)
else:
    pyttsx3.speak("Sorry, invalid input.")
    
