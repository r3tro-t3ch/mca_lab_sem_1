import sys

m = int(input("Enter m : "))
n = int(input("Enter n : "))

if n < m:
    print("m < n")
    sys.exit()

print("Prime numbers : ")
for i in range(m, n+1):
    counter = 0
    for j in range(1,i+1):
        if counter > 2 :
            break
        if i % j == 0:
            counter += 1
    if counter == 2:
        print(i)
        