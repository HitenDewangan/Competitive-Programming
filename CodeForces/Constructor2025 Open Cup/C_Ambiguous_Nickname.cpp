// #include <iostream>
// #include <cctype>

// using namespace std;

// bool isUnambiguous(string &s) {
//     int sz = s.size();
//     bool hasAlpha = false, hasDigit = false;

//     for (char ch : s) {
//         if (isdigit(ch) || ch == 'O') 
//             hasDigit = true;
//         if (isalpha(ch)) 
//             hasAlpha = true;
//     }

//     // A valid nickname must have at least one letter and must start with a letter
//     if (!hasAlpha || !isalpha(s[0])) 
//         return false;

//     // Ensure all 'O's don't create ambiguity
//     for (int i = 0; i < sz - 1; i++) {
//         if (s[i] == 'O' && (isdigit(s[i + 1]) || s[i+1] == 'O')) {
//             return false;
//         }
//     }

//     return true;
// }

// int main() {
//     int t; cin >> t;
//     while (t--) {
//         string s; cin >> s;
//         cout << (isUnambiguous(s) ? "YES" : "NO") << '\n';
//     }
// }



#include <iostream>
#include <string>

using namespace std;

bool isAmbiguous(const string& s) {
    int n = s.length();
    
    // Find first digit that's not O/0
    int firstRealDigit = n;
    for (int i = 0; i < n; i++) {
        if (isdigit(s[i]) && s[i] != '0') {
            firstRealDigit = i;
            break;
        }
    }
    
    // Find last letter that's not O/0
    int lastRealLetter = -1;
    for (int i = n-1; i >= 0; i--) {
        if (isalpha(s[i]) && s[i] != 'O') {
            lastRealLetter = i;
            break;
        }
    }
    
    // If we found a real digit before a real letter, it's ambiguous
    if (lastRealLetter > firstRealDigit) {
        return false;  // ambiguous
    }
    
    // Count ambiguous characters between last letter and first digit
    int ambiguousCount = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'O' || s[i] == '0') {
            if (i > lastRealLetter && i < firstRealDigit) {
                ambiguousCount++;
            }
        }
    }
    
    // If there are ambiguous characters that could be either letter or number,
    // and both interpretations would be valid, then it's ambiguous
    return ambiguousCount > 0;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string s;
        cin >> s;
        
        cout << (isAmbiguous(s) ? "NO" : "YES") << '\n';
    }
    
    return 0;
}