
record = []
sum = 0
for i in range(int(input())):
    read = int(input())
    if read == 0:
        record.pop()
    else:
        record.append(read)

for i in record:
    sum += i

print(sum)