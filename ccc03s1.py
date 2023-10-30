square = 1
while True:
    move = int(input())
    if move == 0:
        print("You Quit!")
        break
    square += move
    if square == 54:
        square = 19
    elif square == 90:
        square = 48
    elif square == 99:
        square = 77
    elif square == 9:
        square = 34
    elif square == 40:
        square = 64
    elif square == 67:
        square = 86

    elif square >= 100:
        print("You are now on square 100")
        print("You Win!")
        break

    
        
    print("You are now on square " + str(square))
