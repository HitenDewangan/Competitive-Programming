#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> arr(n);
    vector<int>freq(n+1,0);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
        freq[arr[i]]++;
    }
    int ans = 0;
    int count = 0;
    for(int i=0; i<=n; i++) {
        if(freq[i]==0) continue;
        else if(freq[i] == 1){
            count++;
        } else {
            ans ++;
        }
    }
    ans += ((count+1)/2)*2;
    cout << ans << "\n";
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t ; cin >> t;
    while(t--) solve();
}