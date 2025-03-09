#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define ull unsigned long long
#define vi vector<int>
#define pii pair<int, int>
#define pll pair<ll, ll>

const int MOD = 1e9 + 7;
const int MAXN = 1e5 + 5;
const ld PI = 3.14159265358979323846;

// ============================================== //

void solve(){
    int n; cin>>n;
    
    string s; cin>>s;
    
    if( n == 1){
        cout << 1 << endl;
        return;
    }

    int lo = 0, hi = n-1;
    while(lo <= hi){
        if(s[lo] != s[hi]){
            lo++, hi--;
        } else {
            cout << hi-lo+1 << endl;
            break;
        }
    }

    if(lo > hi) cout << 0 << endl; // traverse the whole
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        solve();
    }

}