#include<bits/stdc++.h>
using namespace std;

# define ll long long

int main(){
    string s;
    getline(cin, s);

    unordered_set<char> st; 
    for (char c : s) {
        if (islower(c)) {
            st.insert(c);
        }
    }

    cout<<st.size()<<endl;
}