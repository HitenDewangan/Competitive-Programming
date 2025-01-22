#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    vector<int> h(n);

    int maxel = INT_MIN, minel = INT_MAX;
    int maxel_idx = -1, minel_idx = -1;

    for(int i=0; i<n; i++){
        cin>>h[i];
        if(h[i] > maxel){
            maxel = h[i];
            maxel_idx = i;
        }
        if(h[i] <= minel){
            minel = h[i];
            minel_idx = i;
        }
    }

    if(minel_idx < maxel_idx){  // they will cross each other
        cout<< maxel_idx + (n-1) - minel_idx - 1;
    }else{  // they will not cross each other
        cout<< maxel_idx + (n-1) - minel_idx;
    } 

}