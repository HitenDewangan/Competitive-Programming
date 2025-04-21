/*
our spiral matrix will look like
1 2 3
8 9 4
7 6 5
*/

#include<iostream>
using namespace std;

int main(){

    // sample matrix
    int a[5][5] = {
        {1, 2, 3, 4, 5},
        {16, 17, 18, 19, 6},
        {15, 24, 25, 20, 7},
        {14, 23, 22, 21, 8},
        {13, 12, 11, 10, 9}
    };


    // make 4 variables for row_start, row_end, col_start, col_end;
    int row_start = 0, row_end = 4, col_start = 0, col_end = 4;

    while(row_start==0 && col_start==0){

        //for start row
        for(int col=col_start; col<=col_end; col++){
            cout << a[row_start][col] << " ";
        }
        row_start++;

        //for end column
        for(int row = row_start; row<=row_end; row++){
            cout << a[row][col_end] << " ";
        }
        col_end--;

        //for end row
        for(int col = col_end; col>=col_start; col--){
            cout << a[row_end][col] << " ";
        }
        row_end--;

        //for start column
        for(int row = row_end; row>=row_start; row--){
            cout << a[row][col_start] << " ";
        }
        col_start++;
    }
}