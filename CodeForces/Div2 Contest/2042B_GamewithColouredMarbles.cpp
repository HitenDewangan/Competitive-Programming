#include <bits/stdc++.h>
using namespace std;

int solve(int n, vector<int>& marbles) {
    unordered_map<int, int> mp;
    
    for (int i = 0; i < n; i++) {
        mp[marbles[i]]++;
    }
    
    if (mp.size() == 1 && n==1) {  // if all are same
        return 2;
    }
    else if(mp.size() == 1 && n!=1){
        return 1;
    }

    
    int unique = 0, ans = 0;
    for(auto it : mp) {
        if (it.second == 1) {
            unique++;
        }
        else{
            ans++;
        }
    }

    ans += ((unique+1)/2) * 2;

    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin>>n;
        
        vector<int> marbles(n);
        for (int i = 0; i < n; i++) {
            cin >> marbles[i];
        }
        
        cout << solve(n, marbles) << endl;
    }
    
    return 0;
}