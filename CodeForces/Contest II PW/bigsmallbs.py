n = int(input())
lst = []
for i in range(n):
    temp = int(input())
    lst.append(temp)

tup = tuple(lst)
mx = max(tup)
mn = min(tup)

lst = list(tup)
if(len(lst)%2 != 0):
    lst[0], lst[lst.index(mx)] = mx, lst[0] 
    lst[-1], lst[lst.index(mn)] = mn, lst[-1]
else:
    lst[0], lst[lst.index(mx)] = mx, lst[0]
    lst[-1], lst[lst.index(mn)] = mn, lst[-1]
# for i in lst:
#     if(i > mx):
#         mx, lst[lst.index(i)] = i, mx
#     if(i < mn):
#         mn, lst[lst.index(i)] = i, mn


# lst[0], lst[lst.index(mx)] = mx, lst[0]

count = 1

for i in range(0,n-1,2):  #for checking if odd positions are greater or not
    if(lst[i] < lst[i+1]):
        lst[i],lst[i+1] = lst[i+1],lst[i]
        # count +=1


# print(count)
for i in lst:
    print(i,end=" ")



        
            
            