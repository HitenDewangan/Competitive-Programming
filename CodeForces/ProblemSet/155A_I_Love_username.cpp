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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; cin>>n;
    vi a(n);
    loop(n) cin>>a[i];

    stack<int> st; // for keeping minimum element
    st.push(a[0]);
    int maxel = a[0]; // for keeping maximum element
    int cnt=0;
    loop_range(1, n){
        if(a[i] < st.top()){
            st.pop();
            st.push(a[i]);
            cnt++;
        }
        else if(a[i] > st.top() && a[i] > maxel){
            maxel = a[i];
            cnt++;
        }
    }

    cout<<cnt<<endl;

    return 0;
}