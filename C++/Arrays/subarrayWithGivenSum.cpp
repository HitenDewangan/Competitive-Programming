/*Problem : Given an unsorted arrau A of size N of non-negative integers,find a continuous subarray which adds to a given number S

Input : 
N = 5, S = 12
A[] = {1,2,3,7,5}

Output : 2 4
Explanation : The sum of elements from index 2 to 3 is 12

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int *a = new int[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    //taking two pointers

    return 0;
}

// Brute Force Approach :   O(n^2) taking sum of all subarray
// Optimal Approach :       O(n) using sliding window