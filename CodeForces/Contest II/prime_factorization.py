n = int(input())
factors = []
d = 2

while n > 1:
    while n % d == 0:
        factors.append(d)
        n //= d
    d += 1

# Print the factors in the desired format
print('*'.join(map(str, factors)))