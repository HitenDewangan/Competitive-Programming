#include<iostream>
#include<climits>  

using namespace std;

int kadane(int arr[], int n){
    int currSum = 0;
    int maxSum = INT_MIN;
    for(int i=0; i<n; i++){
        currSum += arr[i];
        if(currSum<0){
            currSum = 0;
        }
        maxSum = max(maxSum, currSum);
    }

    return maxSum;
}

int main(){
    int n;
    cin>>n;

    int *a = new int[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    //=============================================================
    int maxel = INT_MIN;         // if all elements are negative
    int check = 0;               // assuming all elements are negative, if at least one is positive then check will be 1
    for(int i=0; i<n; i++){
        maxel = max(maxel, a[i]);
        if(a[i] > 0){
            check = 1;
        }
    }
    if(check == 0){      // if all elements are negative, then adding two elements don't make any sense, and maximum of those elements is our answer
        cout<<maxel;
        return 0;
    }
    //=============================================================

    int wrapSum, nonWrapSum;
    nonWrapSum = kadane(a,n);

    int totalSum=0;
    for(int i=0; i<n; i++){
        totalSum += a[i];
        a[i] = -a[i];
    }

    wrapSum = totalSum + kadane(a,n); //HERE the array going with reversed sign

    cout<< max(wrapSum, nonWrapSum);

    return 0;
}