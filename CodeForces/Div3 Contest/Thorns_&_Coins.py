#and path[index+1] == '*')
def run(path,pro,index):
        if(index == (pro-1)):
            if(path[index] == '*'):
                return 0
            elif(path[index] == '.'):
                return 0
            else:
                return 1
        elif(path[index] == '*'):
            if(path[index+1] == '*'):
                return 0
            return 0 + run(path,pro,index+1)
        elif(path[index] == '.'):
            return 0 + run(path,pro,index+1)
        else:
            return 1+run(path,pro,index+1)

n = int(input())
for i in range(n):
    l = int(input())
    path = input()
    coin = run(path,len(path),1)
    print(coin)   