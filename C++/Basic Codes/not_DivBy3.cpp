//Here we're trying to print numbers that are not divisible by 3

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        if(i%3 == 0){
            continue;
        }
        cout<<i<<endl;
    }
}