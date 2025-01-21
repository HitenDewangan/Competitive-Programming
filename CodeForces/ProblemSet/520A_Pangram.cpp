#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    string s; cin>> s;

    vector<bool> alphabet(26);
    for(int i=0; i<n; i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            alphabet[s[i] - 'A'] = 1;
        }
        else{
            alphabet[s[i] - 'a'] = 1;
        }
    }

    for(int i=0; i<26; i++){
        if(!alphabet[i]){
            cout<<"NO"<<endl;
            return 0;
        }
    }

    cout<<"YES"<<endl;
}