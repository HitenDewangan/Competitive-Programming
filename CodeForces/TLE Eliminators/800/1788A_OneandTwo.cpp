#include<iostream>
#include<vector>
using namespace std;

#define ull unsigned long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int> a(n);
        int count_2 = 0;
        for(int i=0; i<n ; i++){
            cin>>a[i];
            if(a[i] == 2) count_2++;
        }
        if(count_2%2 != 0){
            cout<<-1<<endl;
            continue;
        }
        int cnt = 0;
        for(int i=0; i<n; i++){
            if(a[i] == 2){
                cnt++;
            }
            if(cnt == count_2/2){
                cout<<i+1<<endl;
                break;
            }
        }
    }
}