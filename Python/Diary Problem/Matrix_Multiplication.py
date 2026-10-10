n = int(input())
# A = [list(range(1 + i*n, 1 + (i+1)*n)) for i in range(n)]  #1-4, 4-7, 7-10 IF N=3
# B = [list(range(1 + i*n, 1 + (i+1)*n)) for i in range(n)]

A = [[1,2,3],
    [4,5,6],
    [7,8,9]]

B = [[1,2,3],
    [4,5,6],
    [7,8,9]]

C = [[0]*n for i in range(n)]

for i in range(n):
    for j in range(n):
        for p in range(n):
            C[i][j] += A[i][p]*B[p][j]


for i in range(n):
    print(C[i])

#C should be = [[30,36,42], [66,81,96], [102,126,150]]