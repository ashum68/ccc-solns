

M = int(input())
N = int(input())
gold = []
brushed = []
for i in range(int(input())):
    paint = input().split()
    if paint[0] == "R":
        for i in range(1, N+1):
            brushed = [int(paint[1]), i]
            if brushed in gold:
                gold.remove(brushed)
            else:
                gold.append(brushed)
    if paint[0] == "C":
        for i in range(1, M+1):
            brushed = [i, int(paint[1])]
            if brushed in gold:
                gold.remove(brushed)
            else:
                gold.append(brushed)


print(gold)


