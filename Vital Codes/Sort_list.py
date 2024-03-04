def sort_list(l):
    p = int(input("Enter a number to append: "))
    l.append(p)
    
    ask = input("Do you want to add a number(yes/no): ")
    if (ask == "no" or ask == "NO"):#base case
        l.sort()
        print(l)
        return
    
    elif (ask == "yes" or ask == "YES"):
        sort_list(l)
        
#__MAIN__
l = [1,5,7,8,13,27]
print("Initial list is: ",l)
sort_list(l)



