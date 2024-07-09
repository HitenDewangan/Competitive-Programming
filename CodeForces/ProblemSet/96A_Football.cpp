#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;

    // int one=0, zero=0;
    int last = s[0];
    int count=1;
    for(int i=1; i<s.size(); i++){
        if(s[i] == last) count++;
        else count=1;
        last = s[i];


        if(count>=7){
            cout<<"YES\n";
            return 0;
        }
    }

    cout<<"NO\n";
}