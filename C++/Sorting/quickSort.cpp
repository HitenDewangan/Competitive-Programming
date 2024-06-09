#include<iostream>
using namespace std;

int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i = low-1;              // 
    for(int j=low; j<high; j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[high]);      //time to put pivot on its correct place, such that all elements less than pivot will be on its left and all elements greater than pivot will be on its right
    return i+1;
}

void quickSort(int arr[], int low, int high){

    if(low<high){
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi-1);
        quickSort(arr, pi+1, high);
    }
}


int main(){

    int n;
    cin>>n;

    int *arr = new int[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    quickSort(arr, 0, n-1);
    
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
    
}