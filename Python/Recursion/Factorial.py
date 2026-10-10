def fact(n):
    if(n==1 or n==0):
        return 1
    f1 = fact(n-1)*n
    return f1

n = int(input("Enter a number: "))
print(f"factorial of {n} is ",fact(n))
