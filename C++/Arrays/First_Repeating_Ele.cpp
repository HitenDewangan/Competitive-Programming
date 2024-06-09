// Find index of first repeating element in the array... 1 based indexing

#include<iostream>
#include <climits>
using namespace std;

int getFirstRepeating(int *a, int n){
    const int N = 1e2+2; // 10^2+2
    int idx[N];
    for(int i=0; i<N; i++){
        idx[i] = -1;
    }

    int minidx = INT_MAX;
    for(int i=0; i<n; i++){
        if(idx[a[i]] != -1){
            minidx = min(minidx, idx[a[i]]);
        }
        else{
            idx[a[i]] = i;
        }
    }

    return minidx == INT_MAX ? -1 : minidx+1;
}

int main(){
    int n;
    cin>>n;

    int *a = new int[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int minidx = getFirstRepeating(a, n);

    
    cout << minidx << endl;
}

// status : done