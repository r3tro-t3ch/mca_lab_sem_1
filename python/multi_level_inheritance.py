class Person:
    def __init__(self, first_name, last_name):
        self.first_name = first_name
        self.last_name = last_name

    def print_name(self):
        print(self.first_name, self.last_name)
        
class Employee(Person):
    def __init__(self, first_name, last_name, designation, dept, exp):
        Person.__init__(self,first_name, last_name)
        self.designation = designation
        self.dept = dept
        self.exp = exp

    def print_employee_details(self):
        print("Designation : {0}\nDepartment : {1}\nExperience : {2}".format(self.designation, self.dept, self.exp))

class Payroll(Employee):
    def __init__(self, first_name, last_name, designation, dept, exp, basic, ta, da, hra):
        Employee.__init__(self,first_name, last_name, designation, dept, exp)
        self.basic = basic
        self.ta = ta
        self.da = da
        self.hra = hra
        self.gross = ta+da+hra+basic

    def print_payroll(self):
        print("Basic : {0}\nTA : {1}\nDA : {2}\nHRA : {3}\nGross : {4}\n".format(self.basic, self.ta, self.da, self.hra, self.gross))


person1 = Payroll("First","last name", "Scientist", "Theoratical Physics", "10 years", 100000, 5000, 40000, 4000)
person1.print_name()
person1.print_employee_details()
person1.print_payroll()