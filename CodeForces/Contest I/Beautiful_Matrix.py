# Function to find the minimum number of moves to make the matrix beautiful
def min_moves_to_beautiful(matrix):
    # Find the row and column positions of the number 1
    for i in range(5):
        for j in range(5):
            if matrix[i][j] == 1:
                # Calculate the number of moves needed to bring it to the center
                row_moves = abs(i - 2)  # 2 is the target row index (0-based)
                col_moves = abs(j - 2)  # 2 is the target column index (0-based)
                return row_moves + col_moves

# Input: Reading the matrix
matrix = [list(map(int, input().split())) for _ in range(5)]

# Output: Print the minimum number of moves
result = min_moves_to_beautiful(matrix)
print(result)
