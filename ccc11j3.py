t1 = int(input())
t2 = int(input())
count = 0
while True:
    next = t1 - t2
    if next < 0:
        break
    t1 = t2
    t2 = next
    count += 1

print(count+2)

