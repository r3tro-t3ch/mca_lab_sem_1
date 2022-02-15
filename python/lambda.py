lambda_function = lambda a,b : a >= b

print(lambda_function(20, 30))
print(lambda_function(30, 20))
print(lambda_function("a","c"))
print(lambda_function("c","a"))
print(lambda_function("hello", "hi"))
print(lambda_function("hi", "hello"))