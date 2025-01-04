#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    
    unordered_map<int, int> mp;
    for(int el : a){
        mp[el]++;
    }
    if(k==0){
        cout<< mp.size() <<endl;
        return;
    }
    
    int count=0;
    // doing this process again and again
    while(!mp.empty()){
        int minel = INT_MAX;
        for(auto it : mp){
            minel = min(minel, it.first);
        }
        
        while(!mp.empty()){
            int temp = k;
            for(auto it : mp){
                while(it.first != minel && it.second > 0 && temp-- > 0){
                    it.second--;
                }
                mp.erase(it.first);
                mp.erase(minel);
                count++;
            }
        }
    }
    
    cout<<count <<endl;
    
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}