#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>

void transfer_sTot(string &s, string &t) {
    // find the first 1's index
    int i = 0;
    while(i < s.length() && s[i] != '1') {
        i++;
    }
    if(i < s.length()) {
        // Add suffix to t
        t += s.substr(i);
        // Remove suffix from s
        s = s.substr(0, i);
    }
}

void transfer_tToS(string &s, string &t) {
    // find the first 0's index
    int i = 0;
    while(i < t.length() && t[i] != '0') {
        i++;
    }
    if(i < t.length()) {
        // Add suffix to s
        s += t.substr(i);
        // Remove suffix from t
        t = t.substr(0, i);
    }
}

void solve() {
    int n; 
    cin >> n;
    string s; 
    cin >> s;
    string t = "";

    int cnt_0 = count(s.begin(), s.end(), '0');
    int cnt_1 = count(s.begin(), s.end(), '1');
    
    // edge cases
    if(cnt_0 == n) { // no shift needed
        cout << 0 << endl;
        return;
    }
    if(cnt_1 == n) { // to shift all from s to t
        cout << 1 << endl;
        return;
    }

    int minMoves = 0;
    bool modified = true;

    while(modified && !(count(s.begin(), s.end(), '1') == 0 && count(t.begin(), t.end(), '0') == 0)) {
        modified = false;
        
        string old_s = s;
        string old_t = t;
        
        transfer_sTot(s, t);
        if(s != old_s) {
            modified = true;
            minMoves++;
            if(count(s.begin(), s.end(), '1') == 0 && count(t.begin(), t.end(), '0') == 0) {
                break;
            }
        }
        
        transfer_tToS(s, t);
        if(t != old_t) {
            modified = true;
            minMoves++;
        }
    }

    cout << minMoves << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; 
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}