n = int(input("Enter a positive integer : "))

if n < 0:
    print("Invalid number")
elif n < 10:
    print("Single digit number")
elif n < 100:
    print("Two digit number")
else:
    print("Big number")