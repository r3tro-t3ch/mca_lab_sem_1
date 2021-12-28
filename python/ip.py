ip = str(input("IP : "))
sub_addr = ip.split(".")
octal_ip = str("")
for i in sub_addr:
	octal_ip = str(octal_ip) + str(oct(int(i))) + "."
print(octal_ip)
