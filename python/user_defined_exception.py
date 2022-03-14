n = int(input("Enter a number : "))

class UserDefinedException(Exception):
    pass

class WrongDataType(UserDefinedException):
    pass

class InvalidDataType(UserDefinedException):
    pass


print("Enter {} numbers : ".format(n))

n_numbers = []

special_chars = list("!@#$%^&*()_+|}{[]'\;:/?.>,<~`")

for i in range(n):
    try:
        num = input()

        if num.isnumeric():
            n_numbers.append(num)
        else:
            if len(num) > 1:
                for i in num:
                    if i in special_chars:
                        raise InvalidDataType

                raise WrongDataType
            elif num in special_chars:
                raise InvalidDataType
            else:
                raise WrongDataType

    except InvalidDataType:
        print("Invalid data type")
    except WrongDataType:
        print("Wrong data type")


print(n_numbers)