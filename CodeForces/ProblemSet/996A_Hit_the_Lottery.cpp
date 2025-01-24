#include<bits/stdc++.h>
using namespace std;

# define ll long long

int main(){
    int n; cin>>n;

    vector<int> arr = {100, 20, 10, 5, 1};
    int cnt = 0;
    for(int i : arr){
        while(n >= i && n != 0){
            n -= i;
            cnt++;
        }
        i++;
    }

    cout<<cnt<<endl;
}