# CODE for matrix multiplication

# Function for matrix multiplication

def matrix_multiplication(A, B):
    #check if the number of columns in A is equal to the number of rows in B
    if (len(A[0]) != len(B)):
        print("Multiplication is not possible")
        return
    
    C = [[0 for _ in range(len(A))] for _ in range(len(B[0]))]
    for i in range(len(A)):
        for j in range(len(B[0])):
            for k in range(len(B)):
                C[i][j] += A[i][k] * B[k][j]
    
    for i in range(len(C)):
        print(C[i])



#__MAIN__
A = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
B = [[9, 8, 7], [6, 5, 4], [3, 2, 1]]

# A list D for storing elements after mltiplication of A and B using list comprehension
# D = [sum(a*b for a, b in zip(A_row, B_col)) for A_row in A for B_col in zip(*B)]

matrix_multiplication(A, B)
