N = int(input())
H = input().split()
W = input().split()
H = list(map(int, H))
W = list(map(int, W))
area = 0

for i in range(N):
    area += (H[i] + H[i+1]) * 0.5 * W[i]

print(area)