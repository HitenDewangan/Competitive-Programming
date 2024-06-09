#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

        int x=1, y=1;

        // for x axis
        if(s[0] == '1' && s[1] == '1'){
            x = 21;
        }
        else if(s[0] == '1' || s[1] == '1'){
            x = 11;
        }

        // for y axis
        if(s[2] == '1' && s[3] == '1'){
            y = 21;
        }
        else if(s[2] == '1' || s[3] == '1'){
            y = 11;
        }

        cout<<x*y<<endl;
    }
}