
#Game Settings

import time
import keyboard
f = open("/Users/wrlee/Desktop/dialogue.txt", "r")
text = f.readlines()

y=0
x=0
for i in range(len(text)):
        if "[NAME]" in text[x] :
                text[x] = text[x].replace("[NAME]", name)
        
        while  y < len(text[x]) :
                print(text[x][y],end='')
                y=y+1
                #time.sleep(0.03)
        if "enter your name" in text[x] :
                name = input(":")
        print()
        while True:
                if keyboard.is_pressed(" "):
                        break
        

        x=x+1
        y=0
        
        


