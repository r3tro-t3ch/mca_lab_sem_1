from functools import reduce
import math

matrix = [
    [1,2,3],
    [4,5,6],
    [7,8,9],
]

# square root of sum of square of elements
def square_of_elements(a):
    ele = []
    for i in a: 
        ele.append(i**2)
    return ele

def sum_of_elements(a):
    sum = 0
    for i in a:
        sum += i
    return sum

sqaures = map(square_of_elements, matrix)
sums = map(sum_of_elements,sqaures)
sum_of_matrix_squared_element = 0
for j in sums:
    sum_of_matrix_squared_element += j


# print(sum_of_matrix_squared_element,math.sqrt(sum_of_matrix_squared_element))

# print(math.sqrt(reduce(lambda a,b : a+b, map(lambda a : a*a, [j for j in matrix]))))

print(math.sqrt(reduce(lambda a,b : a+b ,map(lambda a : a*a, [i for j in matrix for i in j]))))

print(reduce(lambda a,b : a+b, [matrix[i][i] for i in range(len(matrix))]))