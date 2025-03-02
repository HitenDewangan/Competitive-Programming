#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
void solve(){
    int n, k; cin>>n>>k;

    // if n is even then it will always be possible to make n coins
    // if n is odd then it will be possible to make n coins only if k is odd
    // because 2.x + odd = odd
    // 2.x + even = even

    if((n&2) == 0) cout<< "YES\n"; // n is even
    else if((k&1) == 1) cout<< "YES\n"; // n is odd and k is odd
    else cout<< "NO\n";

}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    ll t; cin>>t; while(t--)
                    solve();
    return 0;
}

