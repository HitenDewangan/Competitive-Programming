#include<iostream>
using namespace std;

int magic(int** arr, int n){
    int ans = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j] < 0){
                int req = 0-arr[i][j];
                ans += req;
                // cout<<arr[i][j]<<" "<<req<<endl;
                // int p = n-1-i;
                // int q = n-1-j;
                int u=i, v=j;
                while(u <= n-1 && v <= n-1){
                    arr[u][v] += req;
                    u++, v++;
                }
            }
        }
    }
    return ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        // making matrix of nxn
        int** arr = new int*[n];
        for(int i=0; i<n; i++){
            arr[i] = new int[n];
        }
        
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin>>arr[i][j];
            }
        }

        cout<<magic(arr, n)<<endl;

    }
}