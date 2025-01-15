#include<bits/stdc++.h>
using namespace std;


int main(){
    int year;
    cin >> year;

    while(true){
        year++;
        string s = to_string(year);
        set<char> st;
        for(char c : s){
            st.insert(c);
        }
        if(st.size() == 4){
            cout << year << endl;
            break;
        }
    }
    

}