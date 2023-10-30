city_name = []
city_temp = []

while True:
	city = str(input())
	city_list = city.split()
	
	city_name.append(city_list[0])
	
	city_temp.append(int(city_list[1]))
	if city_list[0] == "Waterloo":
		break

coldest = min(city_temp)
index = 0
for i in range(len(city_temp)):
	if city_temp[i] == coldest:
		index = i
print(city_temp)
print(coldest)
print(index)


print(city_name[index])