# Find pair of indices in a sorted array such that sum of values at those indices should be equal to given number "k".

def Two_Pointers(arr, k):
    i = 0
    j = len(arr) - 1
    while i < j:
        if arr[i] + arr[j] == k:
            return [i, j]
        elif arr[i] + arr[j] < k:
            i += 1
        else:
            j -= 1
    return [-1, -1]

a = list(map(int, input().split()))
k = int(input("Enter k: "))
print(Two_Pointers(a, k))   

wroong