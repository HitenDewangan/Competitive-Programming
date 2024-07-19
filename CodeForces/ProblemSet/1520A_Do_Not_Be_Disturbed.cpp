#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int> v(26, 0);    // for storing the count of each character
        int n;
        cin>>n;
        string s;
        cin>>s;

        if(n == 1){
            cout<<"YES\n";
            continue;
        }

        for(int i=0; i<n; i++){
            v[s[i]-'A']++;
        }

        int prev = s[0];
        bool flag = true;
        for(int i=1; i<n; i++){
            if(s[i] == prev && v[s[i]-'A'] > 0){
                v[s[i]-'A']--;
            }
            else if(s[i] != prev && v[prev-'A'] > 1){
                flag = false;
                break;
            }
            prev = s[i];
        }

        if(flag) cout<<"YES\n";
        else cout<<"NO\n";
    }
    
    return 0;
}