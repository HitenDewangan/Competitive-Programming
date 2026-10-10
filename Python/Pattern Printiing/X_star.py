n = int(input("Enter no. of lines:"))

for i in range(n):
    for j in range(n):
        if(i==j):
            print("\\",end="")
        elif(j == (n-i-1)):
            print("/",end="")
        else:
            print("*",end="")
    print()
                  