import math

# Function to check if n has an odd divisor greater than one
def has_odd_divisor(n):
    # If n is even, it NOT has an odd divisor (2)
    if n % 2 == 0:
        return "NO"
    # Iterate through possible odd divisors up to the square root of n
    for i in range(3, int(math.sqrt(n)) + 1, 2):
        if n % i == 0:
            return "NO"
    
    return "YES"

# Input: Get the number of test cases
t = int(input())

# Process each test case
for _ in range(t):
    # Input: Get the value of n
    n = int(input())

    # Output: Print "YES" if n has an odd divisor, greater than one; "NO" otherwise
    result = has_odd_divisor(n)
    print(result)
