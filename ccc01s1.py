
clubs=[]
diamonds=[]
hearts=[]
spades=[]
pt_val = {
    "A" : 4,
    "K" : 3,
    "Q" : 2,
    "J" : 1
}
points=[0,0,0,0]
cards = str(input())

def isFaceCard(card):
    if card == "A" or card == "K" or card == "Q" or card == "J":
        return True
    else:
        return False


def special(suit):
    if len(suit) == 2:
        return 1
    elif len(suit) == 1:
        return 2
    elif len(suit) == 0:
        return 3
    else:
        return 0
        

for i in range(len(cards)):
    card = str(cards[i])
    if i >= 1 and i < cards.find("D"):
        clubs.append(card)
        if isFaceCard(card):
            points[0] += pt_val[card]
    elif i > cards.find("D") and i < cards.find("H"):
        diamonds.append(card)
        if isFaceCard(card):
            points[1] += pt_val[card]
    elif i > cards.find("H") and i < cards.find("S"):
        hearts.append(card)
        if isFaceCard(card):
            points[2] += pt_val[card]
    elif i > cards.find("S"):
        spades.append(card)
        if isFaceCard(card):
            points[3] += pt_val[card]

points[0] += special(clubs)
points[1] += special(diamonds)
points[2] += special(hearts)
points[3] += special(spades)

print("Cards Dealt  Points")
print("Clubs " + " ".join(clubs) + " " + str(points[0]))
print("Diamonds " + " ".join(diamonds) + " " + str(points[1]))
print("Hearts " + " ".join(hearts) + " " + str(points[2]))
print("Spades " + " ".join(spades) + " " + str(points[3]))
print(" Total  " + str(sum(points)))