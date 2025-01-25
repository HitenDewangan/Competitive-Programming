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

    int n; cin>>n;
    vector<string> names(n);
    for(int i=0; i<n; i++){
        cin>>names[i];
    }
    map<string, int> database; // {name, count}, initially count will be zero
    for(const string& name : names){
        if(database[name] == 0){ // Check if count is 0 (no previous occurrences)
            cout<<"OK\n";
        }
        else{  // found
            cout << name << database[name] << endl;
        }
        database[name]++; //// Increment count for each occurrence
    }
}