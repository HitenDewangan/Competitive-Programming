#include<iostream>
using namespace std;

void feelings(int n, int i){

    if(i%2 != 0){       // for odd number
        cout<<"I hate"<<" ";
    }
    else{
        cout<<"I love"<<" ";     // for even number
    }

    if(i == n)  // base case
        return;
    else    
        cout<<"that"<<" ";
        feelings(n, i+1);
}

int main(){
    int n;
    cin>>n;

    feelings(n, 1);

    cout<<"it"<<endl;
}