import serial

a=[]
ser = serial.Serial('/dev/ttyUSB0', 9600)
while True:
	a=str(ser.readline())
	n=2
	while(n!=(len(a)-5)):
		print(a[n],end="")
		n=n+1
	print()
	

