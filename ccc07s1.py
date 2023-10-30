#feb 27 07
n = int(input())

for i in range(n):
    bday_input = input()
    bday = bday_input.split()
    if int(bday[0]) > 1989:
        print("No")
    elif int(bday[0]) == 1989:
        if int(bday[0]) == 1989:
            if int(bday[1]) < 2:
                print("Yes")
            elif int(bday[2]) <= 27 and int(bday[1]) == 2:
                print("Yes")
            else:
                print("No")
    else:
        print("Yes")



