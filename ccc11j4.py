

drilled = [
    [0,-1],[0,-2],[0,-3],[1,-3],[2,-3],[3,-3],[3,-4],[3,-5],[4,-5],[5,-5],[5,-4],[5,-3],[6,-3],[7,-3],
    [7,-4],[7,-5],[7,-6],[7,-7],[6,-7],[6,-7],[5,-7],[4,-7],[3,-7],[2,-7],[1,-7],[0,-7],[-1,-7],[-1,-6]
]
current = [-1,-5]
danger = False
quit = False

while danger == False and quit == False:
    instruct = input().split()
    if instruct[0] == "l":
        for i in range(int(instruct[1])):
            current[0] = current[0]-1
            if current in drilled:
                danger = True
            drilled.append([current[0],current[1]])
        
    elif instruct[0] == "r":
        for i in range(int(instruct[1])):
            current[0] = current[0]+1
            if current in drilled:
                danger = True
            drilled.append([current[0],current[1]])
            
    elif instruct[0] == "u":
        for i in range(int(instruct[1])):
            current[1] = current[1]+1
            if current in drilled:
                danger = True
            drilled.append([current[0],current[1]])
            
    elif instruct[0] == "d":
        for i in range(int(instruct[1])):
            current[1] = current[1]-1
            if current in drilled:
                danger = True
            drilled.append([current[0],current[1]])
    
    if instruct[0] == "q" or danger == True:
        break
    else:
        print(str(current[0]) + " " + str(current[1]) + " safe")

if danger == True:     
    print(str(current[0]) + " " + str(current[1]) + " DANGER")
   



    

