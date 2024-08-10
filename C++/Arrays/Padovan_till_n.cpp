// print padovan sequence till n

#include<iostream>
using namespace std;

void padovanSequence(int n){
    int a=1,b=1,c=1, curr;
    for(int i=0;i<=n;i++){
        curr=a+b;
        a=b;
        b=c;
        c=curr;

        cout << c << " ";
    }
}

int main(){
    int n;
    cin>>n;

    cout<<"1 1 1 ";

    padovanSequence(n);
}