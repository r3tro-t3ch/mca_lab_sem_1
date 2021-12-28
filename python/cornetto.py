#pr^2h/3
import math

h = int(input("Height : "))
d = int(input("Diameter : "))
r = d/2
v = math.pi * (r**2) * h/3
print("Volume : ", v)
