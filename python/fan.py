def validate_high_fan_speed(func):
    def inner(object):
        if object.speed == 5:
            object.speed = 0
        else:
            return func(object)
    return inner

def validate_low_fan_speed(func):
    def inner(object):
        if object.speed == 0:
            object.speed = 5
        else:
            return func(object)
    return inner


class Fan:
    def __init__(self, id, speed = 0):
        self.id = id
        self.speed = speed

    @validate_high_fan_speed
    def increment_speed(self):
        self.speed += 1

    @validate_low_fan_speed
    def decrement_speed(self):
        self.speed -= 1

    def print_fan_data(self):
        print("Id : {0}  Speed : {1}".format(self.id, self.speed))

    
fans = []

for i in range(1,7):
    fans.append(Fan(i, speed=3))

for i in fans:
        i.print_fan_data()

while True:
    id = int(input("Input fan id (1-6) : "))
    
    if id > 6 or id < 1:
        print("Invalid id")
        continue

    choice = int(input("1.Increment\t2.Decrement\n"))

    if choice == 1:
        fans[id-1].increment_speed()
    elif choice == 2:
        fans[id-1].decrement_speed()
    else:
        print("Invalid choice")
        continue

    for i in fans:
        i.print_fan_data()


    
    