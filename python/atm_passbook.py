import csv
from datetime import datetime


def get_curr_time():
    return str(datetime.now()).split(" ")[1].split(".")[0]

f = open("passbook.csv","w")
passbook = csv.writer(f)

name = str(input("Name : "))
aadhar = str(input("Aadhar : "))
mobile_no = str(input("Mobile Number : "))
balance_amount = 0

passbook.writerow([name, aadhar, mobile_no, balance_amount, 0, get_curr_time()])

f.close()

while True:
    try:
        choice = int(input("1. Deposit\t2. Withdraw\t3. Print Passbook\t99. Exit\nchoice : "))
        if choice == 1:
            with open("passbook.csv","a") as f:
                passbook = csv.writer(f)
                amount = int(input("Enter amount for deposition : "))
                balance_amount += amount
                passbook.writerow([name, aadhar, mobile_no, "+{}".format(amount),balance_amount, get_curr_time()])
            
        elif choice == 2:
            with open("passbook.csv","a") as f:
                passbook = csv.writer(f)
                amount = int(input("Balance : {}\nEnter amount to be withdrawn : ".format(balance_amount)))
                if amount > balance_amount:
                    print("Insufficient funds!")
                    continue
                balance_amount -= amount
                passbook.writerow([name, aadhar, mobile_no, "-{}".format(amount) ,balance_amount, get_curr_time()])
                
        elif choice == 3:
            with open("passbook.csv","r") as f:
                passbook_printer = csv.reader(f)
                print("Account Name\tAadhar   \tPhone no\tW/D\tBalance  \tTime")
                for i in passbook_printer:
                    print("{0}\t{1}\t{2}\t{3}\t{4}\t{5}".format(i[0],i[1],i[2],i[3],i[4],i[5]))
                
        elif choice == 99:
            f.close()
            exit()

    except ValueError:
        print("Enter number for choice")