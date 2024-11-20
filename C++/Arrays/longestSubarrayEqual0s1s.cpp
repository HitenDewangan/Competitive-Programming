// have an array only 0's and 1's as elements, find max subarray length with equal 0 and 1

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int maxLength_0(vector<int>& arr, int n) {
    // unordered_map<int, int> mp; // Map to store sum and its first occurrence index
    int maxLen = 0, sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];

        // If sum is 0, a subarray with sum 0 is found
        if (sum == 0) {
            maxLen = i + 1;
        }
    }

    return maxLen;
}

int maxLength_0_1(vector<int>& arr, int n){
    for(int i=0; i<n; i++){
        if(arr[i] == 0){
            arr[i] = -1;
        }
    }
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
        if(sum == 0){
            return maxLength_0(arr,n);
        }
    }

    return 0;

}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<maxLength_0_1(arr,n)<<endl;
    
    return 0;
}