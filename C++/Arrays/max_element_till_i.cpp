// find max element till index i

#include<iostream>
#include<cctype>
using namespace std;

int main(){
    int mx = -1999999999;
    int n;    //size of array
    cin>>n;

    int *a = new int[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    for(int i=0; i<n; i++){
        mx = max(mx, a[i]);
        cout<<mx<<endl;
    }

    return 0;
}