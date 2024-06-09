def find_next_distinct_year(year):
    while True:
        year += 1
        if len(set(str(year))) == 4:
            return year

# Input: Get the year from the user
y = int(input())

# Output: Print the minimum year with distinct digits
result = find_next_distinct_year(y)
print(result)
