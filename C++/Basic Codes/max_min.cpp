#include<iostream>
using namespace std;

int max_min(int arr[], int n){
    int max = arr[0], min = arr[0];
    if(arr[0] > arr[1]){
        max = arr[0];
        min = arr[1];
    }
    for(int i=2; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    cout<<"Max is: "<<max<<endl;
    cout<<"Min is: "<<min;
}

int main(){
    int n;
    cout<<"How many numbers: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    max_min(arr,n);
}


