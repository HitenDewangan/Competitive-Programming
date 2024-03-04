# Function to calculate the minimum number of moves
def min_moves(a, b):
    return (b - (a % b)) % b

# Input: Get the number of test cases
t = int(input())

# Process each test case
for _ in range(t):
    # Input: Get values of a and b
    a, b = map(int, input().split())

    # Output: Print the minimum number of moves for the current test case
    result = min_moves(a, b)
    print(result)
