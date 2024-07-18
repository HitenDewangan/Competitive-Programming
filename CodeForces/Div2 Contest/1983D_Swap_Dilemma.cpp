#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int> a(n), b(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            cin>>b[i];
        }

        map<int, int> mp;
        for(int i=0; i<n; i++){
            mp[a[i]] = i;
        }

        bool flag = true;
        for(int i=0; i<n; i++){
            if(mp.find(b[i]) == mp.end()){
                cout<<"NO"<<endl;
                flag = false;
                break;
            }
        }

        if(a.size()%2 == 0){
            cout<<"YES"<<endl;
        }
        else if(flag && a.size()%2 == 1){
            cout<<"NO"<<endl;
        }
    }

}