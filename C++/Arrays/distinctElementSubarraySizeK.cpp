/*
Given an array, print no. of distinct elements in every subarray of size k
Eg: 
arr(8) = 5 2 4 3 8 3 9 9 32
k=4

void printDistinct(int arr, int k) {

- Approach
    1. Take two pointers i & j:
        For every i eg:     for(i=0; i<=n-k; i++)
        Run j = 0 to k, eg:     for (j=0; j<k; j++)
    2. Check the no. of distinct by adding elements to hash-set.

Sample - 
    vector<int> arr = {2, 2, 4, 3, 8, 3, 9, 9, 3, 2};
    int k = 4;

*/

#include <iostream>
#include <unordered_set>
#include <unordered_map>
#include <vector>
using namespace std;

// void printDistinct(vector<int> arr, int k) {    // Brute Force T.C. = O(n^2), S.C. = O(k)
//     int n = arr.size();
//     for (int i = 0; i <= n - k; i++) {
//         unordered_set<int> st;
//         for (int j = i; j < i + k; j++) {
//             st.insert(arr[j]);
//         }
//         cout << st.size() << endl;
//     }
// }

void printDistinct(vector<int> arr, int k) {    // Optimal T.C. = O(n), S.C. = O(k)
    int n = arr.size();
    unordered_map<int, int> mp;
    for (int i = 0; i < k; i++) {
        mp[arr[i]]++;
    }
    cout << mp.size() << endl;
    for (int i=1; i<=n-k; i++) {
        mp[arr[i-1]]--;
        if (mp[arr[i-1]] == 0) 
            mp.erase(arr[i-1]);
        mp[arr[i+k-1]]++;
        cout<<mp.size()<<endl;
    }
}

int main() {
    vector<int> arr = {2, 4, 9, 3, 8, 3, 5, 8, 9, 8, 9};
    int k = 5;
    printDistinct(arr, k);
    return 0;


}