#include<iostream>
using namespace std;

void printAllSubarrays(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            for(int k=i; k<=j; k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }

}

int main(){
    int a[] = {10, 20, 30, 40, 50};
    printAllSubarrays(a, 5);
}