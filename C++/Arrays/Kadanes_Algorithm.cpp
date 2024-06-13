// to find the maximum contiguous subarray sum using Kadane's Algorithm 
// Time Complexity : O(n)

#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;

    int *a = new int[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int currSum = 0;
    int maxSum = INT_MIN;
    for(int i=0; i<n; i++){
        currSum += a[i];
        if(currSum<0){
            currSum = 0;
        }
        maxSum = max(maxSum, currSum);
    }

    cout<<maxSum<<endl;

    return 0;
}