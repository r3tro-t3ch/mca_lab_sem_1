max_marks = 500
total_marks = 0
print ("Enter marks : ")
for i in range(0,5):
	a = int(input())
	total_marks = total_marks + a

percentage = total_marks/max_marks * 100
cgpa = percentage/10

print("percentage : ", percentage)
print("cgpa : %1.1f"%cgpa)

