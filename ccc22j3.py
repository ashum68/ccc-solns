

steps = input() + " "
tune = ""
end = False


for i in steps:
	if i == "+":
		tune += " tighten "
	elif i == "-":
		tune += " loosen "
	elif i.isdigit():
		tune += i
		end = True
	elif end:
		print(tune)
		tune = i
		end = False
	else:
		tune += i

		
    	

