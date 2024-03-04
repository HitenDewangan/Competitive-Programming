def min_moves_to_different_colors(n, s):
    moves = 0
    for i in range(1, n):
        if s[i] == s[i - 1]:
            moves += 1
    return moves

# Input: Get the number of stones and the colors of the stones from the user
n = int(input())
colors = input()

# Output: Print the minimum number of moves
result = min_moves_to_different_colors(n, colors)
print(result)
