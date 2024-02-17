#Given an array and a number, count all occurrences of that number in the array.
def count_occurrences(arr, num, index=0):
    # Base case: If the index exceeds the length of the array, return 0
    if index == len(arr):
        return 0
    
    # Recursive case:
    # If the current element is equal to the given number, add 1 to the count
    current_count = 1 if arr[index] == num else 0
    
    # Recursively call the function for the rest of the array
    next_count = count_occurrences(arr, num, index + 1)
    
    # Return the total count
    return current_count + next_count

# Example usage:
my_array = list(map(int,input("Enter an array: ").split()))
number_to_count = int(input("Enter number: "))

result = count_occurrences(my_array, number_to_count)
print(f"The number {number_to_count} occurs {result} times in the array.")
