#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int* arr = new int[n];
    int total_value = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        total_value += arr[i];
    }

    sort(arr, arr+n, greater<int>());

    int mySum = 0;
    int i=0;
    while(mySum <= total_value){
        mySum += arr[i];
        total_value -= arr[i];
        i++;
    }

    cout<<i<<endl;



}