#include<iostream>
using namespace std;

int main(){
    int r;
    cout<<"Enter the number of rows and columns: ";
    cin>>r;

    //Increasing triangle
    for(int i=1; i<=r; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    cout<<" "<<endl;

    //Decreasing Triangle
    for(int i=r; i>=1; i--){
        for(int j=i; j>=1; j--){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<" "<<endl;

    //Inverted Decreasing Triangle
    for(int i=1; i<=r; i++){
        for(int j=1; j<=r; j++){
            if(j<i){
                cout<<"  ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    cout<<" "<<endl;

    // cout<<endl;

    //Inverted Decreasing Triangle
    for(int i=0; i<r; i++){
        for(int j=0; j<r; j++){
            if(j>=i){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}








