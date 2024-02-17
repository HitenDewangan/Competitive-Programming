def dec_bin(num):
    if num < 0 :
        print("Invalid !")
    elif num == 0:
        return "0"
    else:
        return str(num%2) + dec_bin(num//2)
    

n = int(input("Enter a number(base 10): "))
print(f"Binary conversion of {n} is: ",dec_bin(n))

