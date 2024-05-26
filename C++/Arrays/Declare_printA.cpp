#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;

    // Declare
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // print
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // accessing
    cout<<arr[1]<<endl;
    printArray(arr,n);

    return 0;
}

// Arrays are passed by reference 
// means original array is modified