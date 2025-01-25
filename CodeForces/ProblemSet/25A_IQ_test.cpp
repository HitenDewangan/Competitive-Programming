#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define ull unsigned long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vll vector<ll>
#define umpi unordered_map<int, pair<int, int>>
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define debug(x) cerr << #x << ": " << x << endl;

const int MOD = 1e9 + 7;
const int MAXN = 1e5 + 5;
const ld PI = 3.14159265358979323846;

// =============================================================================

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; cin>>n;
    vi a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    int even = 0, odd = 0, ev_idx = 0, od_idx = 0;
    for(int i=0; i<n; i++) if(a[i]%2 == 0) even++, ev_idx = i+1; else odd++, od_idx = i+1;
    if(even > odd) cout<<od_idx<<"\n"; else cout<<ev_idx<<"\n";
    return 0;
}