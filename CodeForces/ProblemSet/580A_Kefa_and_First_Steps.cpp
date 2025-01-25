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
    vector<int> money(n);
    for(int i=0; i<n; i++){
        cin>>money[i];
    }

    int maxndm = 1;
    int currndm = 1;
    for(int i=1; i<n; i++){
        if(money[i-1] > money[i]){
            maxndm = max(maxndm, currndm);
            currndm = 1;
        }
        else
            currndm++;
    }

    cout<<max(maxndm, currndm)<<'\n';

    return 0;
}