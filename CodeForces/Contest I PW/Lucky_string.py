def minimal_string(n):
    alphabet = "abcdefghijklmnopqrstuvwxyz"
    result = ""

    for i in range(n):
        result += alphabet[i % 3]

    return result

# Input: Get the length from the user
n = int(input())

# Output: Print the lexicographically minimal string with the repeating pattern "abc"
result = minimal_string(n)
print(result)
