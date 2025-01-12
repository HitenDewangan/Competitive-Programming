#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> a(n), b(n);
        for (int i=0; i<n; i++) {
            cin>>a[i];
        }
        for (int i=0; i<n; i++) {
            cin>>b[i];
        }

        // find the target index -> where a[i] < b[i]
        int target_idx = 0;
        for(int i=0; i<n; i++){
            if(a[i] < b[i]) {
                target_idx = i;
                break;
            }
        }

        int diff = abs(b[target_idx] - a[target_idx]);
        
        // update the materials
        for(int i=0; i<n; i++){
            if(i != target_idx) {
                a[i] -= diff;
            }
        }
            
        // check if still the materials are (>=) than the required
        bool possible = true;
        for(int i=0; i<n; i++) {
            if( i == target_idx || a[i] >= b[i]){
                continue;
            }
            else {
                possible = false;
                cout << "NO" << endl;
                break;
            }
        }
        if(possible) {
            cout << "YES" << endl;
        }
    }
}
