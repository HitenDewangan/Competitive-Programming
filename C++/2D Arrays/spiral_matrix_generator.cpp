/*
our spiral matrix will look like
1 2 3
8 9 4
7 6 5
*/

#include<iostream>
using namespace std;

int main(){

    // here we will generate a nxn spiral matrix
    int num = 1; 
    int n, m;
    cout<<"Enter number of rows and columns: ";
    cin>>m>>n;

    //declare a 2D matrix;
    int* *a = new int*[m];

    // Allocate memory for each row (inner arrays)
    for (int i = 0; i < m; i++) {
        a[i] = new int[n]; // Allocate n integers for row i
    }

    // make 4 variables for row_start, row_end, col_start, col_end;
    int row_start = 0, row_end = m-1, col_start = 0, col_end = n-1;

    while(row_start<=row_end && col_start<=col_end){

        //for start row
        for(int col=col_start; col<=col_end; col++){
            a[row_start][col] = num;
            num++;
        }
        row_start++;

        //for end column
        for(int row = row_start; row<=row_end; row++){
            a[row][col_end] = num;
            num++;
        }
        col_end--;

        //for end row
        for(int col = col_end; col>=col_start; col--){
            a[row_end][col] = num;
            num++;
        }
        row_end--;

        //for start column
        for(int row = row_end; row>=row_start; row--){
            a[row][col_start] = num;
            num++;
        }
        col_start++;

    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<a[i][j]<< " ";
        }
        cout<<endl;
    }
}