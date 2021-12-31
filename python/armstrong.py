import sys

m = int(input('Enter m : '))
n = int(input('Enter n : '))

def armstrong(n):
    sum = 0
    for i in str(n):
        sum += int(i)**len(str(n))
    return sum

if m > n:
    print("m > n")
    sys.exit()

for i in range(m,n+1):
    if(armstrong(i) == i):
        print("{0} armstrong -> {1}".format(i, armstrong(i)))