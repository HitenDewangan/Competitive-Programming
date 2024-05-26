#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int *a = new int[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int curr = 0;
    int total_sum = 0;
    for(int i=0; i<n ; i++){
        curr = 0;
        for(int j=i ; j<n; j++){
            curr +=a[j];
            cout<<curr<<" ";
            
            total_sum += curr;
        }
    }
    cout<<endl;
    cout<<"Total sum of all the subarray is: "<<total_sum<<endl;
}