#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int mag, prev, groups=0;
    for(int i=0; i<n; i++){
        if(i > 0){
            prev = mag;
            cin>>mag;
            if(mag != prev){
                groups++;
            }
        }
        else cin>>mag;
    }
    groups++;

    cout<<groups<<endl;
}