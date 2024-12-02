#include <bits/stdc++.h>
using namespace std;

long long solve(int n, long long k, vector<int>& coins) {
    sort(coins.rbegin(), coins.rend());
    
    long long cumSum = 0;
    long long extra_needed = 0;
    
    for (int i = 0; i < n; i++) {
        cumSum += coins[i];
        
        if (cumSum == k) {
            return 0;
        }
        if (cumSum > k) {
            extra_needed = max(0LL, k - (cumSum - coins[i]));
            break;
        }
    }

    if (cumSum < k) {
        extra_needed = k - cumSum;
    }
    
    return extra_needed;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
        
        vector<int> coins(n);
        for (int i = 0; i < n; i++) {
            cin >> coins[i];
        }
        
        cout << solve(n, k, coins) << endl;
    }
    
    return 0;
}