#include <bits/stdc++.h>
using namespace std;

bool canAchieveDispersion(vector<long long>& pos, int n, long long target) {
    // Try to place first chip
    long long curr = pos[0];
    
    // For each next chip
    for(int i = 1; i < n; i++) {
        long long next_pos = curr + target;  // minimum position needed for next chip
        
        // If current chip can't reach required position even after moving right
        if(pos[i] + 1 < next_pos) return false;
        
        // If current chip can't reach required position even after moving left
        if(pos[i] - 1 > next_pos) {
            curr = pos[i] - 1;  // place at leftmost possible position
        } else {
            curr = next_pos;    // place at required position
        }
    }
    return true;
}

int solve(vector<long long>& pos, int n) {
    // Binary search on the answer
    long long left = 1, right = 2;
    
    // Find initial right boundary
    while(canAchieveDispersion(pos, n, right)) {
        right *= 2;
    }
    
    // Binary search for maximum possible dispersion
    while(left < right - 1) {
        long long mid = (left + right) / 2;
        if(canAchieveDispersion(pos, n, mid)) {
            left = mid;
        } else {
            right = mid;
        }
    }
    
    return left;
}

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        vector<long long> pos(n);
        for(int i = 0; i < n; i++) {
            cin >> pos[i];
        }
        cout << solve(pos, n) << endl;
    }
    return 0;
}