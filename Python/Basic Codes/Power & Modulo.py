def power(x,y,z):
    if y==1:
        return x
    elif y==0:
        return 1

    
    #y-=1
    ans=(x*power(x,y-1,z))%z
    
    return ans


a=int(input("Enter a:"))
b=int(input("Enter b:"))
n=int(input("Enter n:"))
print(f"{a}^{b}%{n} = ",power(a,b,n))
