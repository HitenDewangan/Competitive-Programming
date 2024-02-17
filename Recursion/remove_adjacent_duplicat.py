def rem_adj_dup(str):
    if len(str) <= 1:
        return str
    
    if str[0] == str[1]:
        return rem_adj_dup(str[1:])
    else:
        return str[0] + rem_adj_dup(str[1:])


s = str(input("Enter a string(in same case): "))
print("String after removing adjacent duplicates is: ",rem_adj_dup(s))