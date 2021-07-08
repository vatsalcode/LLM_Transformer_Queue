import pyttsx3
speaker = pyttsx3.init()
speaker.setProperty('rate', 160)
speaker.setProperty('voice', 'english_rp+f6')
print("Hello!")
pyttsx3.speak("Hello!  \nEnter a specific Word and it's Encoded version to get permission:")
s = input("Enter a word: ")
s = s.upper()
temp = ''
for i in s:
    temp += chr(((ord(i) - 60) % 26) + 65)
speaker.setProperty('voice', 'english_rp+f3')
pyttsx3.speak("Please enter the encoded version: ")
i = input("Enter it's encoded version: ")
i = i.upper()
speaker.setProperty('voice', 'english_rp+f4')
if sorted(temp) == sorted(i):
    pyttsx3.speak("Welcome to our Hub!\n You have gained the root access.")
else:
    speaker.setProperty('voice', 'english_rp+f6')
    pyttsx3.speak("System Locked...Permission Denied!")
