from datetime import datetime

date = int(input("date : "))
month = int(input("month : "))
year = int(input("year : "))


dob = datetime(year, month, date)

days = (datetime.today() - dob).ye


years = days / 365
months = (days) / 30
age_days = (days - years * 365 - months*30)

print("{0} years, {1} months and {2} days".format(years, months, age_days))