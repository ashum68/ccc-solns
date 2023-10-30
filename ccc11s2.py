n = int(input())
student = []
answer = []

for i in range(2*n):
    if i < n:
        student.append(input())
    if i >= n:
        answer.append(input())

correct = 0 
for i in range(n):
    if student[i-1] == answer[i-1]:
        correct += 1

print(correct)


