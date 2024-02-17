def gcd(p,q):
    if q==0:
        return p
    return gcd(q,p%q)

x = int(input("Enter num1: "))
y = int(input("Enter num2: "))
print(f"Greatest common divisor of {x} and {y} is: ",gcd(x,y))

#LOGIC : using euclid dividion lemma, 
# base case: if remainder == 0, then quotient is our answer