n = int(input())
t_count = 0
s_count = 0

for i in range(n):
    text = input()
    for j in text:
        if j == "T" or j == "t":
            t_count += 1
        elif j == "S" or j == "s":
            s_count += 1
    
if t_count <= s_count:
    print("French")
else:
    print("English")
