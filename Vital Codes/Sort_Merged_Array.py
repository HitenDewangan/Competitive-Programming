l1 = list(map(int,input("Enter 1st list: ").split()))
l2 = list(map(int,input("Enter 2nd list: ").split()))
# print(l1,l2,sep = "\n")

res = l1+l2
res.sort()
print("Sorted merged array is: ",res)
