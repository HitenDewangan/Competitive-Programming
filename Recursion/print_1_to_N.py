def f(n):
    if(n==0):
        return 1
    f(n-1)
    print(n)
    

n=int(input("Enter a number: "))
f(n)
