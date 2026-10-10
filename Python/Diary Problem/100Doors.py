#Famous 100 Doors question
import math
def perfectSquare(x):
    if(math.sqrt(x) == int(math.sqrt(x))):
        return True
    else:
        return False
    
def door(doors):
    res = []
    for i in range(1,101):
        if(perfectSquare(i) == True):
            res.append(i)
    return res
        

doors = list(1*i for i in range(1,101))
open_doors = door(doors)
print(open_doors)