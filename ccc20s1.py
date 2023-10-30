datasets = int(input())
data = []

for x in range(datasets):
    timespeed = list(map(int, input().split()))
    data.append(timespeed)
data.sort()
startert = data[0][0]
starterp = data[0][1]

max = 0
for x in range(len(data)-1):
	time = data[x+1][0]
	position = data[x+1][1]
	t = time - startert
	p = abs(position - starterp)
	speed = p / t
	starterp = position
	startert = time
	if speed > max:
		max = speed
print(max)