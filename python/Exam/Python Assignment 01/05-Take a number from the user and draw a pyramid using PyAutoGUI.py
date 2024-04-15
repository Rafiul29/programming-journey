import pyautogui
n=int(input())

for i in range(n+1):
    for j in range(i):
        print("#",end="")
        # pyautogui.write("#", interval=0.5) 
    pyautogui.press('enter')
    # print("\n")
