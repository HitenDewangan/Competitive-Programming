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
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    if(a[0] == a[n-1]){
        cout<<"NO"<<endl;
    } 
    else {
        cout<<"YES"<<endl;
        cout<<a[n-1]<<" ";
        for(int i=0; i<n-1; i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
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

// tc : O(nlogn) + O(n) = O(nlogn) = O(50) = O(50*log2(50)) = O(50*6) = O(300)
// sc : O(n) = O(50) = O(50*8) = O(400)