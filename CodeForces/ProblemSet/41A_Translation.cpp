#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    string t;
    cin>>s;
    cin>>t;

    int n = s.size();

    bool flag = true;
    for(int i=0; i<n; i++){
        if(s[i] == t[n-i-1]){
            flag = true;
        }
        else
            flag = false;
    }

    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}