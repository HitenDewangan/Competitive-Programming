n = int(input())
lst = list(map(int, input().split()))   #with this map we can take input in form of list in a single line

mx = lst[0]
pmx = 0

mn = lst[0]
min_height_index = 0

# Find the initial positions of the maximum and minimum heights
for i in range(1, n):
    if lst[i] > mx:
        mx = lst[i]
        pmx = i

    if lst[i] <= mn:
        mn = lst[i]
        pmn = i

# Calculate the minimum number of seconds needed
seconds = 0

# Move the soldier with maximum height to the front
seconds += pmx

# Move the soldier with minimum height to the end
seconds += (n - 1 - pmn)

# If the soldier with maximum height is to the right of the soldier with minimum height,
# adjust the total seconds accordingly
if pmx > pmn:
    seconds -= 1

print(seconds)
