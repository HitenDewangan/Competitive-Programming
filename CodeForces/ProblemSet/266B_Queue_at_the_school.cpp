#include<iostream>
#include<string>
using namespace std;

int main(){
    int n, t;
    cin>>n>>t;

    string s;
    cin>>s;

    for(int i=0; i<t; i++){
        for(int j=0; j<n-1; j++){
            if(s[j] == 'B' && s[j+1] == 'G'){
                s[j] = 'G';
                s[j+1] = 'B';
                j++;     // to skip the next element AS it's already swapped
            }
        }
    }

    cout<<s<<endl;
}