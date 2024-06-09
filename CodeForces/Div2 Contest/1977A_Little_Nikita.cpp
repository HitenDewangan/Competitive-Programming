#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        
        int move = 0;
        while(n != 0){
            if(move < m){    
                move++;
            }
            else{
                move--;
            }
            n--;
        }
        if(move == m){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
}

// status : Done