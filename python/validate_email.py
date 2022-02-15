emails = ["pooja@", "@divya", "karthik@gmail", "sai@gmail.com","gautham@hotmail.com"]

def validate_email(email):
    if "@" in email and email[-4:len(email)] == ".com":
        return True
    else:
        return False
        
soultion = map(validate_email, emails)

for i in soultion:
    print(i)