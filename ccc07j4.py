a = input().replace(" ","")
b = input().replace(" ","")

anagram = True

for i in a:
	if i in b:
		b = b.replace(i, "", 1)
	else:
		anagram = False
		
if anagram:
	print('Is an anagram.')
else:
	print('Is not an anagram.')