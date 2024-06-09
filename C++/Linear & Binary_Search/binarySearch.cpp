/*
Binary Search: You have an sorted array and you want to find an element in it.

:) Definitely if you have to search for X, you will not go from A...
*/

#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int s=0, e=size-1;

    while(s<=e){
        int mid = s+(e-s)/2;

        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;

    int *A = new int[n];
    for(int i=0; i<n; i++){
        cin>>A[i];
    }

    int key;
    cin>>key;

    cout<<binarySearch(A, n, key);

}