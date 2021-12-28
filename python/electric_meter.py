previous_unit = int(input("Enter previous units : "))
current_unit = int(input("Enter current units : "))

unit = current_unit - previous_unit

cost = 50
if unit > 0 and unit <= 100:
    cost += unit * 2.50
elif unit > 100 and unit <= 200:
    cost += 100 * 2.50
    cost += (unit - 100) * 3.10
elif unit > 200 and unit <= 300:
    cost += 100 * 2.50
    cost += (100) * 3.10
    cost += ( unit - 200 ) * 3.40
elif unit > 300:
    cost += 100 * 2.50
    cost += (100) * 3.10
    cost += ( 100 ) * 3.40
    cost += (unit - 300) * 4

print("Cost for", unit, "units is", cost)