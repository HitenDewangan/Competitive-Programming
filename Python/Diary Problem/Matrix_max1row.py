# This is an AMAZON question
# Here we have to find the row which has highest no. of 1s ---> given that if in a column once 1 occurs then rest are 1s

# def max1row(A):
#     max_row = 0
#     for i in list:
#         for j in i[::-1]:
#             max_row += 1
#             if(j == 1):
#                 if(j == i[0]):
#                     return max_row
#                 else:
#                     continue
#             else:
#                 break
#     return max_row
                
#================================================OPTIMIZED and CORRECT==========================================             
def row(A, r, c):
    while c>=0 and r<=len(A)-1:     #c=4 and r=0  len(A)-1 = 4
        if A[r][c] == 1:
            c-=1
            p=r
        elif(A[r][c] == 0 and A[r][c+1] == 0):
                if(r==len(A)-1):
                    return p+1
                else:
                    r+=1
        else:
            r+=1
    return p+1

#__MAIN__
A = [
    [0, 1, 1, 1, 1],
    [0, 0, 1, 1, 1],
    [0, 0, 0, 1, 1],
    [0, 0, 0, 0, 0],
    [1, 1, 1, 1, 1]]

r = 0
c = len(A[0])-1

res = row(A,r,c)
print(res)
#print(r+1)
# res = max1row(A)
# print(res)

#============================================CORRECT BUT NOT OPTIMIZED================================================
# m = []
# for i in range(4):
#         m.append(A[i].count(1))

# mx = m.index(max(m))
# print(mx+1)

#functions have their own time complexity, therefore it is not optimized




