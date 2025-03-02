#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
void solve(){
    int n; cin>>n; 
    int ans = 0, currMax=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x == 0) currMax++;
        else ans = max(ans, currMax), currMax = 0;
    }
    cout<<max(ans, currMax)<<'\n';
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    ll t; cin>>t; while(t--)
                    solve();
    return 0;
}