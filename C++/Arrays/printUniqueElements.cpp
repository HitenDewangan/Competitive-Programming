//PROBLEM: Given an array, where all elements occur twice except one, find that unique element.

#include<iostream>
using namespace std;

int printUniqueElements(int arr[],int size){
    int ans = 0;
    for(int i=0; i<size; i++){
        ans = ans^arr[i];
    }
    cout<<ans<<endl;
}
int main(){
    int n;
    cin>>n;

    // Declare
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //Function Call
    printUniqueElements(arr,n);
}

// Time Complexity: O(n)
// Space Complexity: O(1)

/*
LOGIC: XOR all the 
XOR works like a subtractor.

for example: let arr = [2, 4, 7, 2, 4]

Initialize result to 0:
result = 0

iteration :
result ^= 2 (0 XOR 2 = 2)
result ^= 4 (2 XOR 4 = 6)
result ^= 7 (6 XOR 7 = 1)
result ^= 2 (1 XOR 2 = 3)
result ^= 4 (3 XOR 4 = 7)

The unique element in the array [2, 4, 7, 2, 4] is 7.
*/