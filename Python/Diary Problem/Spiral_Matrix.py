#Spiral matrix
def print_spiral(n):
    matrix = [[0] * n for _ in range(n)]
    print(matrix)

    num = 1
    top, bottom, left, right = 0, n - 1, 0, n - 1

    while top <= bottom and left <= right:
        for i in range(left, right + 1):
            matrix[top][i] = num
            num += 1
        top += 1

        for i in range(top, bottom + 1):
            matrix[i][right] = num
            num += 1
        right -= 1

        for i in range(right, left - 1, -1):
            matrix[bottom][i] = num
            num += 1
        bottom -= 1

        for i in range(bottom, top - 1, -1):
            matrix[i][left] = num
            num += 1
        left += 1

    for row in matrix:
        for element in row:
            if element != 0:
                print(element, end="\t")
            else:
                print("\t", end="")
        print()

# Example with n = 5
print_spiral(int(input()))
