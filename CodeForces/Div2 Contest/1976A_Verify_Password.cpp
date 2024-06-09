#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        string s;

        cin>>n>>s;

        bool check = true;
        for(auto i=0; i<n-1; i++){
            if(int(s[i] > int(s[i+1]))){
                check = false;
                break;
            }
        }

        if(check){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
}

//status : DOne