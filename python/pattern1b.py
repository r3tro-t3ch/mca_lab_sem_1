n = int(input("Enter a number : "))
for i in range(1,n+1):
    pattern = ""
    for j in range(1,i+1):
        pattern += "{0}".format(j)
    print(pattern)