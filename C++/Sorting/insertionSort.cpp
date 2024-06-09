#include<iostream>
#include<vector>
using namespace std;

void insertionSort(vector<int> &arr, int n){
    for(int i=1; i<n; i++){
        int current = arr[i];
        int j = i-1;
        while(arr[j]>current && j>=0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }
}


int main(){
    int n;
    cin>>n;

    vector<int> A(n);
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    
    insertionSort(A, n);

    for(size_t i=0; i<n; i++){
        cout<<A[i]<<" ";
    }

}