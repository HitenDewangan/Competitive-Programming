def calc_len(str):
    if str == "":
        return 0
    
    length = 0
    return length+1 + calc_len(str[1:])

s = str(input("Enter a string: "))
print("Length of string is: ",calc_len(s))
