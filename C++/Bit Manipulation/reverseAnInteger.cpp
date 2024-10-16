#include<iostream>
using namespace std;

int reverseInt(int n){
    int ans=0, pow=10;
    while(n != 0){
        int rem = n%10;
        ans = ans*pow + rem;
        n = n/10;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    cout<<reverseInt(n);
}