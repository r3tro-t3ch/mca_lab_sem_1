name = str(input("Name : "))
n = len(name)
for i in range(1, n+1):
    pattern = ""
    for j in range(0,i):
        pattern += "{}".format(name[j])
    print(pattern)