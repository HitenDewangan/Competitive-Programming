#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define ull unsigned long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define debug(x) cerr << #x << ": " << x << endl;

const int MOD = 1e9 + 7;
const int MAXN = 1e5 + 5;
const ld PI = 3.14159265358979323846;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; cin>>n;
    int faces = 0;
    for(int i=0; i<n; i++){
        string s; cin>>s;
        if(s[0] == 'T') faces += 4;
        else if(s[0] == 'C') faces += 6;
        else if(s[0] == 'O') faces += 8;
        else if(s[0] == 'D') faces += 12;
        else if(s[0] == 'I') faces += 20;
    }

    cout<<faces<<'\n';

    return 0;
}