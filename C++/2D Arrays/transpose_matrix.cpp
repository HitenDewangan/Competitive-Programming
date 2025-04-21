// write code to transpose a matrix
// Input: 1 2 3
//        4 5 6
//        7 8 9
//
// Output: 1 4 7
//         2 5 8
//         3 6 9

#include <iostream>
#include <algorithm> // for reverse function
#include <utility>  // for swap function
using namespace std;

int main() {
    // sample matrix
    int a[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // code to transpose the matrix
    for (int i = 0; i < 3; i++) {
        for (int j = i; j < 3; j++) {
            swap(a[i][j], a[j][i]);
        }
    }

    // code to print the transposed matrix
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}