#rotate a matrix by 90 degree in clockwise direction

n = int(input())
matrix = [list(range(1 + i*n, 1 + (i+1)*n)) for i in range(n)]
for i in matrix:
    print(i)