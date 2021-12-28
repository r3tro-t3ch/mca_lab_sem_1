a = int(input("Enter first number  : "))
b = int(input("Enter second number : "))

# swapping with variable
c = a
a = b
b = c 

print("swapping with vartiable : ",a,b)

# swapping without variable
a,b = b,a

print("swapping without vartiable : ",a,b)