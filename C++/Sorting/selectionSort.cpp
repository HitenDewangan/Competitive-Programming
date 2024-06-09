#include<iostream>
using namespace std;

int selectionSort(int A[], int n){
    for(int i=0; i<n-1; i++){
        int min = i;
        for(int j=i+1; j<n; j++){
            if(A[j] < A[min]){
                int temp = A[j];
                A[j] = A[min];
                A[min] = temp;
            }
        }
    }
}


int main(){
    int n;
    cin>>n;

    int A[n];
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    
    selectionSort(A, n);

    for(size_t i=0; i<n; i++){
        cout<<A[i]<<" ";
    }

}