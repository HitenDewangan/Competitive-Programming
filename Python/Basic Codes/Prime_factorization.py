def prime_factors(n):
    factors = []
    d = 2

    while n > 1:
        while n % d == 0:
            factors.append(d)
            n //= d
        d += 1

    return factors

if __name__ == "__main__":
    try:
        num = int(input("Enter a positive integer: "))
        if num <= 0:
            raise ValueError("Please enter a positive integer.")
        
        result = prime_factors(num)
        print(f"Prime factors of {num}: {result}")
    except ValueError as e:
        print(f"Error: {e}")
