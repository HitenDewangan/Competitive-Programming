#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define ull unsigned long long
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>

const int MOD = 1e9 + 7;
const int MAXN = 1e5 + 5;
const ld PI = 3.14159265358979323846;


void solve() {
    int n; cin>>n;
    vi a(n);
    int neg_cnt = 0, pos_cnt=0;
    for(int i=0; i<n; i++) {
        cin>>a[i];
        if(a[i] == -1) neg_cnt++;
        else pos_cnt++;
    }
    
    int ans = 0;
    while(!(neg_cnt % 2 == 0 && pos_cnt >= neg_cnt)) {
        neg_cnt--, pos_cnt++;
        ans++;
    }

    cout<<ans<<'\n';


    
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