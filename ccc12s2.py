aromatic = input()
roman_dict = {
    "I" : 1,
    "V" : 5,
    "X" : 10,
    "L" : 50,
    "C" : 100,
    "D" : 500,
    "M" : 1000,
}
arabic = []
value = 0

for i in range(int(len(aromatic)/2)):
    arabic.append(int(aromatic[2*i]))

for i in range(int(len(aromatic)/2-1)):
    roman = aromatic[2*i+1]
    roman_after = aromatic[2*i+3]
    if roman_dict[roman_after] > roman_dict[roman]:
        value -= arabic[i] * roman_dict[roman]
    else:
        value += arabic[i] * roman_dict[roman]
value += arabic[-1] * roman_dict[aromatic[-1]]

print(value)

    


    