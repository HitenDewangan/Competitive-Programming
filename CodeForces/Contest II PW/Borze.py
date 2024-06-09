def borze():
    str = input()
    result = ""
    l = len(str)
    i = 0
    while i < l:
        if(str[i] == '.'):
            result += '0'
            i +=1
        elif(str[i] == '-' and str[i+1] == '.'):
            result += '1'
            i += 2
        else:
            result += '2'
            i += 2

    return result

res = borze()
print(res)
