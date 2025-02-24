#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define ull unsigned long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>

const int MOD = 1e9 + 7;
const int MAXN = 1e5 + 5;
const ld PI = 3.14159265358979323846;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        vi a(n);
        ll mindiff = INT_MAX;
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(i > 0){
                mindiff = min(mindiff, 1ll*(a[i]-a[i-1]));
            }
        }
        if(mindiff < 0){
            cout<< 0 <<'\n';
        }
        else if(mindiff == 0){
            cout<< 1 <<'\n';
        }
        else if(mindiff % 2 == 0 ){
            cout<< mindiff/2 + 1 <<'\n'; 
        }
        else{
            cout<< (mindiff+1)/2 <<'\n'; 
        }
    }
}