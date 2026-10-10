# to print given pattern in alphabet (increasing)
'''
n=int(input("Enter n:"))

for i in range(1,n+1):
    for j in range(65,65+i):
        print(chr(j), end="")
    print()

'''

#decresing triangle
n=int(input("Enter n:"))
for i in range(n):
    for j in range(n-i):
        print("*",end=' ')
    print()
