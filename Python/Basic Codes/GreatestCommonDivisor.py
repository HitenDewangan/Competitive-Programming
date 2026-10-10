def gcd(p,q):    #Using Euclid Division Algorithm
    if q==0:
        print(p,q)
        return p
    else:
        print(p,q)
        return gcd(q,p%q)
    
x = int(input("Enter first number:"))
y = int(input("Enter second number:"))
res = gcd(x,y)
print("GCD is:",res)