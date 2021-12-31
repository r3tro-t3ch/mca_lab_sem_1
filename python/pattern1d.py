n = int(input("Enter a number : "))
number = 0
for i in range(1, n+1):
    pattern = ""
    for j in range(0,i):
        number += 1
        pattern += "{}".format(number)
    print(pattern)