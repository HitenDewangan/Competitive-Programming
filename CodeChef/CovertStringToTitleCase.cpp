#include<iostream>
#include<string>
using namespace std;

int main() {
    int T;
    cin >> T;
    cin.ignore(); // Clear buffer after reading T

    while (T--) {
        string s;
        getline(cin, s);

        int n = s.size();

        for(int i = 0; i < n; i++){
            if(i == 0 || s[i-1] == ' '){
                s[i] = toupper(s[i]); //If current character is space, next character //should be capitalized
            }
            else if(isupper(s[i]) && (islower(s[i+1]) || islower(s[i-1]))){
                s[i] = tolower(s[i]); // Lowercase current character
            }
        }
       
        cout << s << endl;
    }

    return 0;
}