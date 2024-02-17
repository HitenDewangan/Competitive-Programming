# USING LOOP
'''
def sum_of_digits(number):
    # Convert the number to a string to iterate through its digits
    num_str = str(number)
    
    # Initialize the sum
    digit_sum = 0
    
    # Iterate through each digit and add it to the sum
    for digit in num_str:
        digit_sum += int(digit)
    
    return digit_sum

# Example usage:
input_number = 12345
result = sum_of_digits(input_number)
print(f"The sum of the digits of {input_number} is {result}.")
'''
#USING RECURSION

def sum_of_digits_recursive(number):
    # Base case: when the number has only one digit
    if number < 10:
        return number
    
    # Recursive case: sum the last digit and call the function with the remaining part
    return number % 10 + sum_of_digits_recursive(number // 10)

# Example usage:
input_number = int(input("Enter number: "))
result = sum_of_digits_recursive(input_number)
print(f"The sum of the digits of {input_number} is {result}.")

