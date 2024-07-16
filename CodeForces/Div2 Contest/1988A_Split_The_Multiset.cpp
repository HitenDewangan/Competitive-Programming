#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int op=0;
        while(n > 1){
            n -= k-1;
            op++;
        }

        cout<<op<<endl;
    }
}
    