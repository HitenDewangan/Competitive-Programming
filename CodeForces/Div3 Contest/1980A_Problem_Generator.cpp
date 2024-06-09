#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        
        string s;
        cin>>s;

        vector<int> v(7, 0);   // as  A to G has 7 characters

        for(int i=0; i<n; i++){
            v[int(s[i]) - 65]++;
        }

        int count = 0;
        for(int el : v){
            if(el < m){
                count += m - el;
            }
        }

        cout<<count<<endl;
    }
}

// Time Complexity = O(n)