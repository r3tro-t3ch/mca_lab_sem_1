import math


x = float(input("Enter x : "))
n = int(input("Enter n : "))


x_rad = x * (math.pi/180)

print("radians {}".format(x_rad))

cosx = sinx = 0

def factorial(n):
    fact = 1
    for i in range(n,0,-1):
        fact *= i
    return fact

for i in range(0,n):
    print(i,2*i, (2*i) + 1)
    cosx += (-1**i)*(x_rad**(2*i)/factorial(2*i))
    sinx += (-1**i)*(x_rad**((2*i) + 1)/factorial((2*i) + 1))

print("Cos x : {0}, {2}, Sin x : {1}, {3}".format(cosx, sinx, math.cos(x_rad), math.sin(x_rad)))