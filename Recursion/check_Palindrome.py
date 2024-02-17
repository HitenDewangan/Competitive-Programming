def is_palindrome(s):
    # Base case: an empty string or a string with one character is always a palindrome
    if len(s) <= 1:
        return True
    
    # Check if the first and last characters are the same
    if s[0] == s[-1]:
        # Recursively check the substring without the first and last characters
        return is_palindrome(s[1:-1])
    else:
        # If the first and last characters are not the same, it's not a palindrome
        return False

# Example usage:
input_string = "radar"
result = is_palindrome(input_string.lower())  # Convert to lowercase for case-insensitive check
if result:
    print(f"{input_string} is a palindrome.")
else:
    print(f"{input_string} is not a palindrome.")
