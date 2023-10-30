
n = int(input())


for x in range(n):
    number = ""
    original = input().lower()
    for y in original:
        
        if y == "-":
            continue
        elif y == "1" or y == "2" or y == "3" or y == "4" or y == "5" or y == "6" or y == "7" or y == "8" or y == "9" or y == "0":
            number += y
        elif y == "a" or y == "b" or y == "c":
            number += "2"
        elif y == "d" or y == "e" or y == "f":
            number += "3"
        elif y == "g" or y == "h" or y == "i":
            number += "4"
        elif y == "j" or y == "k" or y == "l":
            number += "5"
        elif y == "m" or y == "n" or y == "o":
            number += "6"
        elif y == "p" or y == "q" or y == "r" or y == "s":
            number += "7"
        elif y == "t" or y == "u" or y == "v":
            number += "8"
        elif y == "w" or y == "x" or y == "y" or y == "z":
            number += "9"

    print(number[:3]+"-"+number[3:6]+"-"+number[6:10])