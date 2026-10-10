def sod(n):
    if not n:
        return 0
    else:
        return n.pop() + sod(n)

str = input()
lst = list(map(int, str))
print("Sum of digits is:", sod(lst.copy()))  # Passing a copy of the list to keep the original list unchanged

