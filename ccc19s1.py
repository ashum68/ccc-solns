flips = input()
h = flips.count("H")
v = len(flips) - h

if h % 2 == 1 and v % 2 == 1:
    print("4 3")
    print("2 1")
elif h % 2 == 1 and v % 2 == 0:
    print("3 4")
    print("1 2")
elif h % 2 == 0 and v % 2 == 1:
    print("2 1")
    print("4 3")
else:
    print("1 2")
    print("3 4")

