#sum 1 to n
def Summ(n):
    sum=0
    if n==1:
        return 1
    sum = n + Summ(n-1)
    return sum



n=int(input("Enter n:"))
print("Sum is:",Summ(n))

'''
n=int(input("Enter n:"))
sum=0
for i in range(1,n+1):
    sum+=i
print(sum)
'''
