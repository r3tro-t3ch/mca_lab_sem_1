import math

p = int(input("p : "))
q = int(input("q : "))
m = int(input("m : "))
n = int(input("n : "))

b = p + m 
h = q + n

d = math.sqrt(b**2 + h**2)
print("distance : ", d)
