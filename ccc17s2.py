N = int(input())

tides = input().split()

tides = list(map(int, tides))

tides.sort()
if N%2 == 1:
    half = N//2 + 1
else:
    half = N//2

high = []
low = []

high = tides[half:]
low = tides[:half]

ordered_tides = []

for i in range(half):
    ordered_tides.append(low[half-i-1])
    try:
        ordered_tides.append(high[i])
    except:
        pass

ordered_tides = list(map(str, ordered_tides))

print(" ".join(ordered_tides))
