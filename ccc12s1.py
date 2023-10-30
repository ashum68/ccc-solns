

J = int(input())
if J < 4:
    print(0)
else:
    J -= 3
    print(J)
    print((J*(J+1)*(J+2))/6)