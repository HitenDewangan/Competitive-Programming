def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True

def find_prime_sequence(s):
    digits = list(map(int, s))
    
    # If there are only two digits, it's impossible to perform the operation
    if len(digits) == 2:
        return -1

    # Try removing digits until a prime sequence is found
    for i in range(len(digits)):
        temp_digits = digits[:i] + digits[i+1:]
        num = int(''.join(map(str, temp_digits)))
        if is_prime(num):
            return temp_digits

    return -1

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        sequence = input().strip()
        result = find_prime_sequence(sequence)
        
        if result == -1:
            print(-1)
        else:
            print(''.join(map(str, result)))
