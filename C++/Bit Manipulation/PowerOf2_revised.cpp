// figure out if a number is power of 2 withou using any loops

#include<iostream>
using namespace std;

bool powerOf2(int n){
    return n>0 && (n & (n-1)) == 0;
}

int main(){
    int n;
    cin>>n;
    cout<<powerOf2(n);
}