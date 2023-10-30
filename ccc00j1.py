num_of_bids = int(input())
names = []
bids = []

for x in range(num_of_bids):
	name = input()
	bid = int(input())
	
	names.append(name)
	bids.append(bid)

position = bids.index(max(bids))

print(names[position])
