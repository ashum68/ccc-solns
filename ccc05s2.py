limits = input().split()
posX = 0
posY = 0
while True:
    move = input().split()
    moveX = int(move[0])
    moveY = int(move[1])
    if moveX == 0 and moveY == 0:
        break
    if posX + moveX < 0:
        posX = 0
    elif posX + int(move[0]) > int(limits[0]):
        posX = int(limits[0])
    else:
        posX += int(move[0])
    if posY + int(move[1]) < 0:
        posY = 0
    elif posY + int(move[1]) > int(limits[1]):
        posY = int(limits[1])
    else:
        posY += int(move[1])
    print(str(posX)+ " " + str(posY))


