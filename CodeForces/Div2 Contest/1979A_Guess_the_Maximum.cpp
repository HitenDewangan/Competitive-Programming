#include<iostream>
#include<vector>
#include <climits>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        vector<long long> a(n);
        
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        // int maxel = *max_element(a.begin(), a.end());
        // int minel = *min_element(a.begin(), a.end());

        long long maxel = INT_MIN, minel = INT_MAX;
        for(int i=0; i<n-1; i++){
            maxel = max(a[i], a[i+1]);
            minel = min(minel, maxel);
        }

        cout<<minel-1<<endl;

    }
}

// Status : Done
