import serial
import time
import pyautogui
ArduinoSerial = serial.Serial('COM3',9600)
time.sleep(2)
while 1:
	incomingL = str(ArduinoSerial.readline())
	time.sleep(.2)
	incomingR = str(ArduinoSerial.readline())
	if incomingL > "b'30/r/n'" and incomingL < "b'45/r/n'"and incomingR > "b'50/r/n'":pyautogui.hotkey('ctrl','right')
	if incomingL < "b'30/r/n'" and incomingL > "b'15/r/n'"and incomingR > "b'50/r/n'":pyautogui.hotkey('ctrl','left')
	if incomingR > "b'30/r/n'" and incomingR < "b'45/r/n'"and incomingL > "b'50/r/n'":pyautogui.hotkey('ctrl','up')
	if incomingR < "b'30/r/n'" and incomingR > "b'15/l/n'"and incomingL > "b'50/r/n'":pyautogui.hotkey('ctrl','down')
	else:print ("Error")
