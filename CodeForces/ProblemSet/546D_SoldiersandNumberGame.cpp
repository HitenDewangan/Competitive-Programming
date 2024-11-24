#include <bits/stdc++.h>
using namespace std;

const int MAXN = 5000005;
int smallest_prime_factor[MAXN];
int prime_factors_count[MAXN];
 
void sieve() {
    // Initialize arrays
    for(int i = 0; i < MAXN; i++) {
        smallest_prime_factor[i] = i;
        prime_factors_count[i] = 0;
    }
    
    // Sieve of Eratosthenes to find smallest prime factor
    for(int i = 2; i * i < MAXN; i++) {
        if(smallest_prime_factor[i] == i) {
            for(int j = i * i; j < MAXN; j += i) {
                if(smallest_prime_factor[j] == j) {
                    smallest_prime_factor[j] = i;
                }
            }
        }
    }
    
    // Calculate number of prime factors for each number
    for(int i = 2; i < MAXN; i++) {
        prime_factors_count[i] = prime_factors_count[i / smallest_prime_factor[i]] + 1;
    }
}

int solve(int a, int b) {
    int result = 0;
    // Sum up prime factors from (b+1) to a
    for(int i = b + 1; i <= a; i++) {
        result += prime_factors_count[i];
    }
    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // Precompute prime factors
    sieve();
    
    int t;
    cin >> t;
    
    while(t--) {
        int a, b;
        cin >> a >> b;
        cout << solve(a, b) << "\n";
    }
    
    return 0;
}