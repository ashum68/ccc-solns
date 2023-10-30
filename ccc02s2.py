num = int(input())
den = int(input())


whole = num // den
mixed_num = num - whole * den

if num == 0:
	print(0)
	
elif num < den:
	print(str(mixed_num) + "/" + str(den))
elif whole == int(num/den):
	print(whole, str(mixed_num) + "/" + str(den))
else:
	print(whole)