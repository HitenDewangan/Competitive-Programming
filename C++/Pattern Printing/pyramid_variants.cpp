//This has a lot of variations in pyramid patterns

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    // //half pyramid after 180 degree rotation
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n; j++){
    //         if(j<=n-i){
    //             cout<<"  ";
    //         }
    //         else{
    //             cout<<"* ";
    //         }
    //     }
    //     cout<<endl;
    // }

    //half pyramid using numbers
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }




}
