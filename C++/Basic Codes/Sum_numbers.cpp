#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"How many numbers: ";
    cin>>n;

    int a,sum=0;
    for(int i=0; i<n; i++){
        cin>>a;
        sum+=a;
    }
    cout<<"Sum is: "<<sum;
}


