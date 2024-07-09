#include<iostream>
using namespace std;

int main(){

    int num = 1; 
    //since it is only square matrix we only need n-dimension
    int n;
    cout<<"Enter the dimension (n) of the matrix: ";
    cin>>n;

    int** a = new int* [n];
    for (int i = 0; i < n; i++) {
        a[i] = new int[n];
    } 

    // inserting elements in the matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = num; 
            num++;
        }
    } 

    // printing original matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout<<a[i][j]<<" "; 
        }
        cout<<endl;
    }

    // we need 2 variables
    int col = 0;

    // printing transpose matrix
    cout<<"Transpose is :\n";
    while(col<=n-1){

        for(int row=0 ; row<=n-1; row++){
            cout<<a[row][col] << " ";
        }
        cout<<endl;
        col++;

    }
}
