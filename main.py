import speech_recognition as sr
import queue
import serial
import time

arduino = serial.Serial(port='COM5', baudrate=115200, timeout=.1)
r = sr.Recognizer()
print("------------------------------------------------")
print("         Press Ctrl+C to stop recording         ")
print("------------------------------------------------")
print()

q = queue.Queue()

def write_read(x):
    x = x.encode('utf-8')
    arduino.write(x)
    time.sleep(0.05)
    data = arduino.readline()
    return data

while(1):
    with sr.Microphone() as source:
        r.adjust_for_ambient_noise(source)
        audio = r.listen(source)

    try:
        str1 = r.recognize_google(audio)
        print(str1)
        
        value = write_read(str1)

    except sr.UnknownValueError:
        print()
    except sr.RequestError as e:
        print()




