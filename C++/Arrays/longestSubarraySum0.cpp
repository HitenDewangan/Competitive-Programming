// longest subrarray length with sum 0
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int maxLength(vector<int> arr, int n) {
    unordered_map<int, int> mp; // Map to store sum and its first occurrence index
    int maxLen = 0, sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];

        // If sum is 0, a subarray with sum 0 is found
        if (sum == 0) {
            maxLen = i + 1;
        }

        // If sum is encountered for the first time, store it in the map
        if (mp.find(sum) == mp.end()) {
            mp[sum] = i;
        } else {
            // If sum is encountered again, calculate the length of the subarray
            maxLen = max(maxLen, i - mp[sum]);
        }
    }

    return maxLen;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<maxLength(arr,n)<<endl;
    
    return 0;
}