A = [
    [0, 1, 1, 1],
    [0, 0, 1, 1],
    [1, 1, 1, 1],
    [0, 1, 1, 1]]

for i in range(len(A)):
    for j in range(len(A[0])):
        print(A[j][i], end=" ")
    print()