import serial
import sys

ser = serial.Serial('/dev/ttyUSB0', 9600)
var=bytes(sys.argv[1],'utf-8')
ser.write(var)
