money = int(input())
s1 = int(input())
s2 = int(input())
s3 = int(input())
count = 0
turn = 0
while money > 0:

    if turn % 3 == 0:
    	if s1 % 35 == 0:
    		if s1 != 0:
        		money += 30
        s1 += 1

    if turn % 3 == 1:
        if s2 % 100 == 0:
			if s2 != 0:
   				money += 60
		s2 += 1

	if turn % 3 == 2:
    	if s3 % 10 == 0:
        	if s3 != 0:
            	money += 9
		s3 += 1

turn += 1
money -= 1
count += 1

print("Martha plays", count, "times before going broke.")