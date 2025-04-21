// write code to rotate a matrix by 90 degrees clockwise
// Input: 1 2 3
//        4 5 6
//        7 8 9

// Output: 7 4 1
//         8 5 2
//         9 6 3

#include <iostream>
#include <algorithm> // for reverse function
#include <utility>  // for swap function
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

    int n = 5; // size of the matrix
    int m = 5; // size of the matrix

    // code to transpose the matrix
    for(int i=0; i<n; i++){
        for(int j=i; j<m; j++){
            swap(a[i][j], a[j][i]);
        }
    }
    // code to reverse the rows of the transposed matrix
    for(int i=0; i<n; i++){
        reverse(a[i], a[i]+m);
    }

    // code to print the rotated matrix
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}  

