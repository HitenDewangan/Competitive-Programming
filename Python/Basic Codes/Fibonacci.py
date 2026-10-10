#Fibonacci
'''
n=int(input("Enter the value of n:"))
a,b=0,1
for i in range(n):
    print(a)
    temp=a
    a=b
    b=temp+b
    
'''

'''
a = 0
b = 1
count = 0
while (count < n):
    print(a)
    temp = a
    a = b
    b = temp + b
    count = count + 1
'''


def fibo(n):
    if n==1:
        return 0         #base case
    elif n==2:
        return 1
    else:
        return (fibo(n-1)+fibo(n-2))  #recursive case

x=int(input("Enter n:"))
for i in range(1,x+1):
    print( fibo(i))
