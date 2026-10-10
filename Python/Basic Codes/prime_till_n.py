def generate_primes(n):
    primes = []

    for num in range(2, n + 1):
        is_prime = True
        for i in range(2, int(num ** 0.5) + 1):
            if num % i == 0:
                is_prime = False
                break
        if is_prime:
            primes.append(num)

    return primes

# Example usage:
if __name__ == "__main__":
    try:
        n = int(input("Enter a positive integer (n): "))
        if n <= 1:
            raise ValueError("Please enter a positive integer greater than 1.")
        
        prime_numbers = generate_primes(n)
        print(f"Prime numbers up to {n}: {prime_numbers}")
    except ValueError as e:
        print(f"Error: {e}")
