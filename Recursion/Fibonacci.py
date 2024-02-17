def fibo(n):
    if n <= 1:
        return n
    else:
        return fibo(n-1) + fibo(n-2)

#___main___
n = int(input("Enter n: "))
fib_numbers = fibo(n)
print(f"Fibonacci sequence up to {n} numbers: {fib_numbers}")

'''
LOGIC: Since fibonacci numbers are the sum of previous two number
Hence, we stored first two numbers and then generated the new number with 
sum of previous two :)
'''