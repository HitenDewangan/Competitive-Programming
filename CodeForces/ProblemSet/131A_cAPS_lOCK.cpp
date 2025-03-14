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

string switchCase(const string& str) {
    string result;
    for (char c : str) {
        if (islower(c)) {
            result += toupper(c);
        } 
        else {
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

    int low_cnt = 0, upp_cnt = 0;
    for(char c : s){
        if(c >= 'a' && c <= 'z') low_cnt++;
        else upp_cnt++;
    }
    if(upp_cnt == s.size()) cout << switchCase(s) << '\n'; // if all are upper case
    else if(low_cnt == 1 && s[0] >= 'a' && s[0] <= 'z') // if all are uppercase except first
        cout<< switchCase(s) << endl;
    else
        cout << s << endl;

}