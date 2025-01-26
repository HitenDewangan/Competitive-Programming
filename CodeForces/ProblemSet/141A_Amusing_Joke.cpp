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

    string guest, host, pile;
    cin >> guest >> host >> pile;

    unordered_map<char, int> mp;
    for (int i = 0; i < guest.size(); i++) mp[guest[i]]++;
    for (int i = 0; i < host.size(); i++) mp[host[i]]++;

    for (int i = 0; i < pile.size(); i++) {
        mp[pile[i]]--;
        if (mp[pile[i]] == 0) mp.erase(pile[i]);
    }

    if (mp.size() == 0) cout << "YES";
    else cout << "NO";
}