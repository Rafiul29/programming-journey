import pyautogui
n=int(input())

for i in range(n+1):
    for j in range(i):
        pyautogui.write("#", interval=0.5) ##
    pyautogui.press('enter')

