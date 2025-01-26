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

    int n, m; cin>>n>>m;
    vector<int> pieces(m);
    for(int i=0; i<m; i++){
        cin>>pieces[i];
    }

    sort(pieces.begin(), pieces.end());

    cout<<pieces[n-1]-pieces[0]<<endl;    
}