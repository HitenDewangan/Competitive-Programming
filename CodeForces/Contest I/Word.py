def correct_word_register(word):
    upper_count = sum(1 for char in word if char.isupper())
    lower_count = len(word) - upper_count

    if upper_count > lower_count:
        return word.upper()
    else:
        return word.lower()

# Input: Get the word from the user
s = input()

# Output: Print the corrected word
result = correct_word_register(s)
print(result)
