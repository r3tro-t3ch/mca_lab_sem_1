import sys

n = int(input("Number : "))
if n > 9:
    print("Invalid number")
    sys.exit()

number = "1"

for i in range(1,n+1):
    print(int(number*i)**2)
