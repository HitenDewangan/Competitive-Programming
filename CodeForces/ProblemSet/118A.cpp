// This is Codeforces problem - 118A "String Task"

// Problem link - https://codeforces.com/problemset/problem/118/A

#include <iostream>
#include<string>
#include <cctype>

using namespace std;

int main() {
    string s;
    cin>>s;
    
    for(char &i : s){
        i = tolower(i);
        }
    
    string::iterator it = s.begin();
    while (it != s.end()) {
        char store = '.';
        if(*it == 'a' || *it == 'e' || *it == 'i' || *it == 'o' || *it == 'u' || *it == 'y'){
            //do nothing :)
        }
        else{
            cout<<store<<*it;
        }
        it++;
    }

    return 0;
}