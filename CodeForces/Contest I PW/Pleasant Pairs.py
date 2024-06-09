# Function to count pairs of indices satisfying the condition
def count_pairs(n, arr):
    total_pairs = 0
    for i in range(n):
        for j in range(i + 1, n):
            if arr[i] * arr[j] == i + j + 2:
                total_pairs += 1
    return total_pairs

# Input: Get the number of test cases
t = int(input())

# Process each test case
for _ in range(t):
    # Input: Get the length of array n
    n = int(input())
    
    # Input: Get the array elements
    arr = list(map(int, input().split()))

    # Output: Print the number of pairs satisfying the condition
    result = count_pairs(n, arr)
    print(result)
