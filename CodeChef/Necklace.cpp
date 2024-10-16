#include<iostream>
using namespace std;

void rotate(int a[], int start, int end){
    while(start < end){
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n, k;
        cin>>n>>k;
	    int* arr = new int[n];
	    for(int i=0; i<n;i++){
	        cin>>arr[i];
	    }
	    
	    rotate(arr, 0, k-1);
	    rotate(arr, k, n-1);
	    rotate(arr, 0, n-1);
	    
	    for(int i =0; i<n; i++){
	        cout<<arr[i]<<" ";
	    }
        cout<<endl;
	    
	}

}
