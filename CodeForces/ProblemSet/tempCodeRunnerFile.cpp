#include <iostream>
#include <unordered_map>
#include <algorithm>

#define endl "\n"

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int *students = new int[n];
        for(int i=0; i<n; i++){
            cin>>students[i];
        }

        if(n==1){
            cout<<0<<endl;
            continue;
        }

        unordered_map<int, int> m;
        for(int i=0; i<n; i++){
            m[students[i]]++;
        }

        if (m.size() == n){
            cout<<1<<endl;
            continue;
        }



        int max_freq = m.begin()->second;
        for(auto it = m.begin(); it != m.end(); it++){
            if(m.size() == it->second && it->second >= max_freq ){
                max_freq = it->second - 1;
            }
            else if(m.size() > it->second && it->second > max_freq){
                max_freq = it->second;
            }
            
        }

        int siz = m.size();

        cout<< max(max_freq, siz) <<endl;
    }
}