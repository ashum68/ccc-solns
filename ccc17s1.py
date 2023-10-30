
n = int(input())
swift = input().split()
sema = input().split()
swift_sum = 0
sema_sum = 0
count = 0
day = 0

for i in range(n):
    count += 1
    swift_sum += int(swift[i])
    sema_sum += int(sema[i])
    if swift_sum == sema_sum:
        day = count

print(day)
