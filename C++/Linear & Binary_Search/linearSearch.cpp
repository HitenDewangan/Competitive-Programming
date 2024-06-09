#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int key){
    for(int i=0; i<size; i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;

    int A[n];
    for(int i=0; i<n; i++){
        cin>>A[i];
    }

    int key;
    cin>>key;

    int index = linearSearch(A, n, key);
    cout<<index;

}

//Time Complexity: O(n)
//Space Complexity: O(1)