#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;

        unordered_set<int> st(n);
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            st.insert(x);
        }

        if(n==1 && st.count(k) != 0){   // single element is common in itself
            cout<<"YES"<<endl;
            continue;
        }

        if(st.count(k) != 0){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}