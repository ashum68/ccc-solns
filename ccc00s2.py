flow = []
for i in range(int(input())):
    flow.append(int(input()))

while True:
    action = int(input())
    if action == 77:
        break
    elif action == 88:
        stream = int(input()) -1
        try:
            flow[stream] = flow[stream] + flow[stream + 1]
        except:
            continue
        flow.pop(stream + 1)

    elif action == 99:
        stream = int(input()) -1
        flow_percentage = int(input())
        flow.insert(stream + 1, (1 - flow_percentage/100) * flow[stream])
        flow[stream] = flow[stream] * flow_percentage / 100

output = ""
for i in flow:
    output += str(i) + " "
print(output)


