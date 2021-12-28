d = int(input("Enter date : "))
m = int(input("Enter month : "))
y = int(input("Enter year : "))

month_str = ""
if m == 1:
    month_str = "JAN"
elif m == 2:
    month_str = "FEB"
elif m == 3:
    month_str = "MAR"
elif m == 4:
    month_str = "APR"
elif m == 5:
    month_str = "MAY"
elif m == 6:
    month_str = "JUN"
elif m == 7:
    month_str = "JUL"
elif m == 8:
    month_str = "AUG"
elif m == 9:
    month_str = "SEP"
elif m == 10:
    month_str = "OCT"
elif m == 11:
    month_str = "NOV"
elif m == 12:
    month_str = "DEC"

print("{0}-{1}-{2}".format(d, month_str, y))