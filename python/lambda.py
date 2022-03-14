lambda_function = lambda a,b : a >= b

print(lambda_function(9, 10))
print(lambda_function(10, 9))
print(lambda_function("a","c"))
print(lambda_function("c","a"))
print(lambda_function("hello", "hi"))
print(lambda_function("hi", "hello"))