def power(x,y):
    if y==1:
        return x
    elif y==0:
        return 1

    
    y-=1
    ans=x*power(x,y)
    return ans


a=int(input("Enter a:"))
b=int(input("Enter b:"))
print("a raised to power b = ",power(a,b))
'''
ans=1
for i in range(b):
    ans*=a

print(ans)
    
'''
