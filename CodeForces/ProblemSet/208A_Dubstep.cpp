#include<iostream>
#include<string>
using namespace std;

int main(){

    string s;
    cin>>s;

    string temp = "";
    string ans = "";

    int l = 0;
    for(int i=0; i<s.size(); i++){
        int l = 0;
        if(i< s.size() - 2 && s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
            i += 2;
            if(!ans.empty() && ans.back() != ' '){
                ans += ' ';
            }
            continue;
        }
        else{
            ans += s[i];
        }
    }

    cout<<ans<<endl;
}