#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define ull unsigned long long
#define vi vector<int>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define loop_range(a, b) for (int i = a; i < b; i++)
#define loop(n) for (int i = 0; i < n; i++)
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define endl '\n'
#define debug(x) cerr << #x << ": " << x << endl;

const int MOD = 1e9 + 7;
const int MAXN = 1e5 + 5;
const ld PI = 3.14159265358979323846;

// ============================================== //

void solve(){
    int n, k, p;
    cin>>n>>k>>p;

    if(k == 0) {
        cout<<0<<endl;
        return;
    }
    int absDiv = ceil(abs(k)/(p*1.0));

    if(absDiv <= n) cout<<absDiv<<endl;
    else cout<< -1 <<endl;
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