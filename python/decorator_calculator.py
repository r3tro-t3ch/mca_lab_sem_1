def validate_number(func):
    def inner(a,b):
        if (str(a) > "a" and str(a) < "z") or (str(a) > "A" and str(a) < "Z") or (str(b) > "a" and str(b) < "z") or (str(b) > "A" and str(b) < "Z"):
            print("Enter number not alphabet")
        else:
            return func(int(a),int(b))
    return inner

def validate_division(func):
    def inner(a,b):
        if (str(a) > "a" and str(a) < "z") or (str(a) > "A" and str(a) < "Z") or (str(b) > "a" and str(b) < "z") or (str(b) > "A" and str(b) < "Z"):
            print("Enter number not alphabet")
        elif (int(b) == 0):
            print("Denominator should not be zero")
        else:
            return func(int(a),int(b))
    return inner

@validate_number
def add(a,b):
    print(a+b)

@validate_number
def subtract(a,b):
    print(a-b)

@validate_number
def multiply(a,b):
    print(a*b)

@validate_division
def divide(a,b):
    print(a/b)


def Main():
    while True:
        choice = int(input("1.Add\t2.Subtract\t3.Multiply\t4.Divide\t99.Exit\n"))
        if choice == 99:
            exit()
        a = input("Num 1 : ")
        b = input("Num 2 : ")
        if choice == 1:
            add(a,b)
        elif choice == 2:
            subtract(a,b)
        elif choice == 3:
            multiply(a,b)
        elif choice == 4:
            divide(a,b)
        else:
            print("Invalid input")

Main()