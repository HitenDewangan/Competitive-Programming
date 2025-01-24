#include<bits/stdc++.h>
using namespace std;

# define ll long long

int main(){
    long long n, k;
    cin>>n>>k;

    long long ceil_val = (n+2-1)/2; //this is used to calc ceil i.e. ceil(a/b) = (a+b-1)/b
    if(k <= ceil_val){
        cout<< 2ll*k-1 <<endl;
    }
    else{
    cout<< 2ll*(k-ceil_val) <<endl; // we want to know that the k what multiple of 2 , i.e 2, 4, 6, 8, 10, 12, 14, 16, 18, 20
    }
    
    return 0;
}