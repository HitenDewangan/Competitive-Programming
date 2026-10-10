#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define ull unsigned long long
#define vi vector<int>

const int MOD = 1e9 + 7;

// ======================================================================

void solve() {
    ll a, b, n; cin>>a>>b>>n;
    vi tools(n);
    for(int i=0; i<n; i++) 
        cin>>tools[i];

    ll timer = b, maxTime = a;
    ll seconds = 0;

    for(int i=0; i<n; i++){
        timer += tools[i];
        timer = min(timer, maxTime);
        seconds += --timer;
    }

    cout << seconds << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin>>t;
    while(t--) {
        solve();
    }
    
}