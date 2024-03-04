def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True

def find_next_prime(num):
    next_num = num + 1
    while not is_prime(next_num):
        next_num += 1
    return next_num

# Input: Get the prime number n and the next number m
n, m = map(int, input().split())

# Check if m is the next prime number after n
if find_next_prime(n) == m:
    print("YES")
else:
    print("NO")
