def calc(a,b):
    op = input("Enter the operator: ")
    if op=="+":
        print(a+b)
    elif op=="-":
        print(abs(a-b))
    elif op=="*":
        print(a*b)
    else:
        print(a/b)

x = int(input("Enter first number: "))
y = int(input("Enter second number: "))
calc(x,y)
