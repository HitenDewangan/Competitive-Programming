#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>

const ll MAXN = 1e6 + 5;

set<ll> primeSquares;

void precomputePrimeSquares() {
    vector<bool> isPrime(MAXN, true);
    isPrime[0] = isPrime[1] = false;   // 0 and 1 are not prime

    // Sieve of Eratosthenes
    for (int i = 2; i * i<= MAXN; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j < MAXN; j += i)
                isPrime[j] = false;
        }
    }

    // Store squares of primes
    for (int i = 2; i <= MAXN; i++) {
        if (isPrime[i]) {
            ll sq = 1LL * i * i;
            if (sq <= MAXN*MAXN)
                primeSquares.insert(sq);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    precomputePrimeSquares();

    int n;
    cin >> n;
    vector<ll> a(n);

    for (int i=0; i<n; i++){
        cin>>a[i];
    }

    // for(auto it=primeSquares.begin(); it != primeSquares.end(); it++){
    //     if(primeSquares.find(999966000289) != primeSquares.end())
    //     cout<<*it<<" ";
    // };

    for (int i = 0; i < n; i++) {
        if (primeSquares.find(a[i]) != primeSquares.end())
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}