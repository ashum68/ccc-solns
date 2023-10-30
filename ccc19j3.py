num_of_lines = int(input())

for i in range(num_of_lines):
	message = ""
	coded_message = input() + " "
	
	last_character = coded_message[0]
	count = 0
	char_count = 0
	for character in coded_message:
		char_count += 1
		if character == last_character:
			count += 1
		else: 
			message += str(count) + " " + last_character + " "
			last_character = character
			count = 1
			
	
		
	print(message)
	