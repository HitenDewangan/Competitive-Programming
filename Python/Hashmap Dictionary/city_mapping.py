def city_mapping(cities, codes):
    d = {}
    for city in cities:
        if(city not in d):
            d[city] = []
    
    for i in range(len(codes)):
        d[cities[i]].append(codes[i])

    print(d)





#========= M A I N =========
n = int(input("Enter number of cities: "))
cities = []
codes = []
for i in range(n):
    city = input("Enter city: ")
    cities.append(city)
    code = int(input("Enter code: "))
    codes.append(code)

city_mapping(cities, codes)
