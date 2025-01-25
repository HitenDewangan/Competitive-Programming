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

string toTitleCase(const string& str) {
    string result;
    bool capitalizeNext = true; 

    for (char c : str) {
        if (isspace(c) || ispunct(c)) { 
            capitalizeNext = true;
            result += c;
        } else if (capitalizeNext) {
            result += toupper(c);
            capitalizeNext = false;
        } else {
            result += tolower(c);
        }
    }

    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s; getline(cin, s);

    cout << toTitleCase(s) << endl;

}