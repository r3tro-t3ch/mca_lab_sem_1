alphabets = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
n = int(input("Enter a number : "))
number = 0
for i in range(1, n+1):
    pattern = ""
    for j in range(0,i):
        pattern += "{}".format(alphabets[number])
        number += 1
    print(pattern)