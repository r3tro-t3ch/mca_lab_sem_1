name = str(input("Enter name : "))

last_letter = name[-1]
vowels = ["a","e","i","o","u"]

if last_letter in vowels:
    print("Girl")
else:
    print("Boy")