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
    vi a(n);

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    if(n&1) {  // odd
        cout<< accumulate(a.begin(), a.end(), 0, bit_xor<>()) <<endl;
    } else { // even
        if(accumulate(a.begin(), a.end(), 0, bit_xor<>()) == 0){
            cout<<0<<endl;
        } else {
            cout<<-1<<endl;
        }

    }
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