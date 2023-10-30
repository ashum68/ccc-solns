y=int(input())
while True:
    y += 1
    distinct = True
    digits = []
    for i in str(y):
        if i in digits:
            distinct = False
        digits.append(i)
    if distinct == True:
        print(y)
        break

        
    


        