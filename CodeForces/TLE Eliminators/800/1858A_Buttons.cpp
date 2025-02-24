#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define ull unsigned long long
#define pii pair<int, int>
#define pll pair<ll, ll>

const int MOD = 1e9 + 7;
const int MAXN = 1e5 + 5;
const ld PI = 3.14159265358979323846;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; cin>>n;
    while(n--) {
        int a, b, c;
        cin >> a >> b >> c;

        if (c % 2 == 0) {
            if (a > b) {
                cout << "First" << endl;
            } else {
                cout << "Second" << endl;
            }
        } else {
            if (b > a) {
                cout << "Second" << endl;
            } else {
                cout << "First" << endl;
            }
        }
    }
}
 