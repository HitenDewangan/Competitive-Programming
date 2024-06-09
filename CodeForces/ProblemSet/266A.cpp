//Codeforces: 266A - "Stones on the table"

#include <iostream>
#include <string>
#include<cctype>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    char previous = s[0];
    int count = 0;
    
    for (int i = 1; i < n; ++i) {
        if (s[i] == previous) {
            count++;
        }
        previous = s[i];
    }
    
    cout << count;

    return 0;
}
