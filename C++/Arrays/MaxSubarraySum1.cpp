// calculate the max subarray sum from subarray s to e
/*
sample input
ar = {-2, 1, -3, 4, -1, 2, 1, -5, 4}
s = 0
e = 3

sample output
max sum = 4

*/

#include<iostream>
#include<climits>
using namespace std;

int maxSub1(int a[], int n){  // O(n^3)
    int max = INT_MIN;
    for(int s=0; s<n; s++){
        for(int e=s; e<n; e++){
            int sum = 0;
            for(int i=s; i<=e; i++){
                sum += a[i];
            }
            if(sum > max){
                max = sum;
            }
        }
    }
    return max;
}

int maxSub1_optimised(int a[], int n){   // O(n^2)
    int* currSum = new int[n];

    int sum = 0;
    for(int i=0; i<n; i++){
        sum += a[i];
        currSum[i] = sum;
    }

    int max = INT_MIN;
    for(int s=0; s<n; s++){
        for(int e=s; e<n; e++){
            int sum = 0;
            if(s==0){
                sum = currSum[e];
                break;
            }
            else{
                sum = currSum[e] - currSum[s-1];
            }
            if(sum > max){
                max = sum;
            }
        }
    }

    return max;
}

int main(){
    // int arr[] = {-2, 1, -3, 4, -1, 2, 1};
    // int s = 1, e = 10;
    // int n = sizeof(arr)/sizeof(arr[0]);
    // cout<<maxSub1(arr, n)<<'\n';

    // cout<<"Optimised: "<<maxSub1_optimised(arr, n)<<'\n';

    int n;
    cin>>n;

    int* arr = new int[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<maxSub1_optimised(arr, n);
}