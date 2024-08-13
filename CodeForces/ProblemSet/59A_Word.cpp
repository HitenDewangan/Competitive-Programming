#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    string s;
    int uc=0, lc=0; //uc=uppercase, lc=lowercase
    cin>>s;

    for(char c : s){
        if(c >= 'A' && c <= 'Z') uc++;
        else lc++;
    }

    if(uc>lc) transform(s.begin(), s.end(), s.begin(), ::toupper);
    else transform(s.begin(), s.end(), s.begin(), ::tolower);

    cout<<s<<endl;
}