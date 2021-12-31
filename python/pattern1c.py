alphabets = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
n = int(input("Enter a number : "))
for i in range(0,n):
    pattern = ""
    pattern += "{}".format(alphabets[i]*(i+1))
    print(pattern)