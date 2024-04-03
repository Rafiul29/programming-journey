# import pyautogui

# for i in range(0,3):
#     pyautogui.write("Md Rafiul islam", interval=0.5)
#     pyautogui.press('enter')


import cv2
cam=cv2.VideoCapture(0)
while True:
    _,frame=cam.read()
    cv2.imshow('my cam',frame)
    cv2.waitKey(1)