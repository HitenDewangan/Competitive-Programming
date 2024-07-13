#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        
        vector<int> v(k);
        int count = 0;    // no. of operations

        for(int i=0; i<k; i++){
            cin>>v[i];
            if(v[i] == 1) count++;   // counting the number of 1
        }

        if(count == k-1){
            cout<<count<<endl;
            continue;
        }
        else if(count == k){
            cout<<k-1<<endl;
            continue;
        }

        sort(v.begin(), v.end());  // sorting in increasing order

        for(int i=0; i<k-1; i++){
            if(v[i] != 1 ){
                count += v[i] + v[i]-1;  // no. of 1s from t number
            }
        }
        // count += k-1;  // for adding all the 1's

        cout<<count<<endl;
    }
}