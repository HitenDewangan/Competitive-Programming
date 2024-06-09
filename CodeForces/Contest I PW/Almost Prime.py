n = int(input())
prime = []
#for storing prime numbers till n
for i in range(2,n+1):
    for j in range(2,i):
        if i%j == 0:
            break
    else:
        prime.append(i)
    
#print(prime)

ct = 0
for i in range(2,n+1):
    count = 0
    for j in prime:
        if i%j == 0:
            count+=1
    if count == 2:
        ct+=1

print(ct)
    