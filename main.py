from vosk import Model, KaldiRecognizer
import queue, serial, time
import pyaudio

model = Model(r'D:\Projects\SpeechToText\model')
recognizer = KaldiRecognizer(model, 16000)

cap = pyaudio.PyAudio()
stream = cap.open(format = pyaudio.paInt16, channels=1, rate=16000, input=True, frames_per_buffer=8192)

arduino = serial.Serial(port='COM7', baudrate=115200, timeout=.1)
stream.start_stream()
print("------------------------------------------------")
print("         Press Ctrl+C to stop recording         ")
print("------------------------------------------------")
print()


def write_read(x):
    x = x.encode('utf-8')
    arduino.write(x)

    
    time.sleep(0.05)
    data = arduino.readline()
    return data


while True:
    data = stream.read(4096)
    # if len(data) == 0:
    #     break

    if recognizer.AcceptWaveform(data):
        text = recognizer.Result()
        text = text[14:-3]
        print(text)
        value = write_read(text)
        # print(value)
