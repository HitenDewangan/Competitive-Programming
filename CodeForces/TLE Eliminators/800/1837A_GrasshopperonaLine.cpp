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
    int x, k; cin>>x>>k;
    if(x%k != 0){
        cout<< 1<<'\n'<< x << '\n'; 
    }
    else{
        if(x - (k+1) < 0){
            cout<< 2 << '\n' << x-(k-1) << " " << k-1 << '\n';
        }
        else{
            cout<< 2 << '\n' << x-(k+1) << " " << k+1 << '\n';
        }
    }
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