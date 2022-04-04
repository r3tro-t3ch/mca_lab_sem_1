f = open("resume.txt", "w")

name = str(input("Name : "))
email = str(input("Email : "))
phone_number = str(input("Phone Number : "))
qualification = str(input("Highest Qualification : "))
work_expereince = str(input("Work Experience : "))


f.write("Resume\n")
f.write(
    "Name : {0}\nEmail : {1}\nPhone Number : {2}\nHighest Qualification : {3}\nWork Experience : {4}\n".format(name, email, phone_number, qualification, work_expereince)
    )

f.close()
