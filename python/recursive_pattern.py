n = int(input("Number : "))

def recursive_pattern(n, i = 0):
    if i == n:
        return
    else:
        i += 1
        print(int('1'*i)**2)
        recursive_pattern(n, i)



def recursive_pattern2(n):
    if n == 0:
        return
    else:
        recursive_pattern(n-1)
        print(int('1'*n)**2)


recursive_pattern2(n)