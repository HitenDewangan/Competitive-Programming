def arrange_children(n, t, s):
    queue = list(s)

    for _ in range(t):
        i = 0
        while i < n - 1:
            if queue[i] == 'B' and queue[i + 1] == 'G':
                # Swap the positions of boy and girl
                queue[i], queue[i + 1] = queue[i + 1], queue[i]
                i += 2  # Skip the next position as it's already swapped
            else:
                i += 1

    return ''.join(queue)

# Input: Get user-defined values for n, t, and initial arrangement
n = int(input())
t = int(input())
initial_arrangement = input()

# Output: Print the result
result = arrange_children(n, t, initial_arrangement)
print(result)
