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
    int n;
    cin >> n;
    
    if(n<=10) cout<<n<<endl;
    
    ll ans = 10; // have all the numbers from 1 to 10
    for(int i= 20; i<=n; i+=10){
        ans ++;
    }

    cout<<ans<<'\n';
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