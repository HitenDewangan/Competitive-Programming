#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string s = "78914726";

    sort(s.begin(), s.end(), greater<char>());

    cout<<s<<'\n';
}