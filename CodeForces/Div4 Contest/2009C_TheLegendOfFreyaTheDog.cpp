#include<iostream>
using namespace std;

int ceil_div(int a, int b){
    return a/b + ((a^b) > 0 && a%b != 0);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int x, y, k;
        cin>>x>>y>>k;

        x = ceil_div(x,k);
        y = ceil_div(y,k);

        cout<< max(2*x-1, 2*y)<<'\n';


        // int ans = (x/k) + (y/k) + max((x%k),(y%k));
        
        // if((x==0 || y==0) || (x%k == 0 && y%k == 0)) ans++;
        //     cout<<ans<<endl;
 
    }
}