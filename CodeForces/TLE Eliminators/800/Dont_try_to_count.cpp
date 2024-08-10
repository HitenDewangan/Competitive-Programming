#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        
        string x, s;
        cin>>x;
        cin>>s;

        // corner case
        if(s == x){
            cout<<0<<endl;
            continue;
        }

        int count = 0;

        for(int i = 0; i < 6; i++){
            if(x.find(s) != string::npos){
                count = 1;
                cout<<i<<endl;
                break;
            }
            x += x;
        }
        
        if(count == 0)
            cout<<-1<<endl;
        
    }
}