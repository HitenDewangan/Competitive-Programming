#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, f, k;
        cin>>n>>f>>k;

        int *arr = new int [n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        //if deleting all the elements in the array
        if(n==k){
            cout<<"YES"<<endl;
            continue;
        }

        int fav = arr[f-1];     // storing the favourite number

        sort(arr, arr+n, greater<int>());     // sorting the array in descending order

        int check = 0;
        for(int i=0; i<n; i++){
            if(arr[i]==fav && i<k && !(arr[k] == fav)){
                cout<<"YES"<<endl;
                check = 1;
                break;
            }
            else if(arr[i]==fav && i<k && arr[k] == fav){
                cout<<"MAYBE"<<endl;
                check = 1;
                break;
            }
        }

        if(check == 0){
            cout<<"NO"<<endl;
        }

    }
}