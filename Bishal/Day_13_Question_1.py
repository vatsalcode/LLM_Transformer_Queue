import pyautogui
import webbrowser as wb
import time
wb.open("web.whatsapp.com")
time.sleep(30)
pyautogui.write("Hello, let's spam in whatsapp!")
for i in range(5):
    pyautogui.write("Hello!")
    pyautogui.press("enter")
