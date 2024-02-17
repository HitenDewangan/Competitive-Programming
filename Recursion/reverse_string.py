def reverse(s):
    if len(s) == 0:
        return s
    else:
        return s[-1] + reverse(s[0:-1])

s = str(input("Enter a string: "))
print(reverse(s))
