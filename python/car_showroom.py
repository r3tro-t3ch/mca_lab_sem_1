from nis import cat


class nexa:

    def __init__(self, branch_name):
        self.branch_name = branch_name
        self.cars = dict()
        self.sales = 0
        self.revenue = 0

    def add_new_cars(self, name, cost, quantity):
        self.cars[name] = {
            "cost" : cost,
            "quantity" : quantity
        }

    def print_showroom_data(self):
        print("Branch {0}, sales : {1}, revenue : {2}".format(self.branch_name, self.sales, self.revenue))
        for i in self.cars:
            print("car name : {0}, price : {1}, quantity {2}".format(i, self.cars[i].get('cost'),self.cars[i].get('quantity')))

    def buy_car(self, car_name):
        # check if car is present or not

        try:
            cost, quantity = self.cars[car_name].get('cost'),self.cars[car_name].get('quantity')
        except:
            print("No such car found")
            return

        if quantity == 0:
            print("No Stock")
        else:
            self.revenue += cost
            self.sales += 1
            quantity = self.cars[car_name].get('quantity')
            quantity -= 1
            self.cars[car_name]['quantity'] = quantity


# create showroom
banashankari = nexa("banashankari")
rajajinagar = nexa("rajajinagar")

# add car to banashankari showroom
banashankari.add_new_cars("dzire",620000, 20)
banashankari.add_new_cars("vitara", 1220000, 12)
banashankari.add_new_cars("ciaz",1100000, 25)

# add car to rajajinagar showrrom
rajajinagar.add_new_cars("dzire",620000, 30)
rajajinagar.add_new_cars("vitara", 1220000, 18)
rajajinagar.add_new_cars("ciaz",1100000, 21)

while True:
    showroom = int(input("1. Banashankari 2.Rajajinagar : "))

    if showroom == 1:
        banashankari.print_showroom_data()
        car_name = str(input("car name : "))
        banashankari.buy_car(car_name)
        banashankari.print_showroom_data()

    elif showroom == 2:
        rajajinagar.print_showroom_data()
        car_name = str(input("car name : "))
        rajajinagar.buy_car(car_name)
        rajajinagar.print_showroom_data()

    else:
        print("Invalid choice!!")