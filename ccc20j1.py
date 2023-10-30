small = int(input())
medium = int(input())
large = int(input())

score = small + 2 * medium + 3 * large

if score >= 10:
	print("happy")
else:
	print("sad")