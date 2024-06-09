n = int(input())

if n % 2 == 1:
    print(-1)
else:
    permutation = list(range(1, n + 1))
    
    for i in range(0, n, 2):
        permutation[i], permutation[i + 1] = permutation[i + 1], permutation[i]
    
    print(*permutation)
    #The *permutation syntax is used to unpack the elements of the list for printing, separating them by whitespace.
