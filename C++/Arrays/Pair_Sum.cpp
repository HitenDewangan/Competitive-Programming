/* Check if there exists two elements in an array such thata their sum is equal to given k;
Input: arr[] = {8, 7, 2, 5, 3, 1}
    k = 10

Output: true
Explanation: (8, 2) and (7, 3)
*/

#include<iostream>
#include <algorithm>
using namespace std;

//=======================================================B R U T E F O R C E ====================================================
bool pairSum(int arr[], int n, int k){       //Time Complexity: O(n^2)
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] + arr[j] == k){
                cout<<arr[i]<< " " << arr[j]<<endl;
                return true;
            }
        }
    }
    return false;
}
//======================================================O P T I M I Z E D====================================================
bool pairSum2(int arr[], int n, int k){       //Time Complexity: O(n)
    int low=0, high=n-1;

    //checking if array is sorted or not
    if(!is_sorted(arr, arr + n)) sort(arr, arr + n);
    
    while(low < high){
        if(arr[low] + arr[high] == k){
            cout<<arr[low]<< " " << arr[high]<<endl;
            return true;
        }
        else if(arr[low] + arr[high] < k){
            low++;
        }
        else{
            high--;
        }
    }
    return false;
}

//=================================================M A I N  F U N C T I O N=================================================
int main(){

    int a[] = {8, 7, 2, 5, 3, 1};

    int n = sizeof(a)/sizeof(a[0]);

    int k = 10;

    cout<<pairSum2(a, n, k)<<endl;
}