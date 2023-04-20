import RPi.GPIO as GPIO

potPin = 18  # chân đọc giá trị từ biến trở
GPIO.setmode(GPIO.BCM)  # thiết lập chế độ đánh dấu chân BCM
GPIO.setup(potPin, GPIO.IN)  # khai báo chân GPIO là INPUT

while True:
    potVal = GPIO.input(potPin)  # đọc giá trị từ biến trở
    print(potVal)  # in giá trị đọc được lên màn hình console
