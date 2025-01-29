#include<iostream> 
#include<vector>

using namespace std;

int main(){
    int n; cin>>n;
    int count = 0;
    vector<string> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i][0] == '+') count++;
    }
    cout<<count<<'\n';
}