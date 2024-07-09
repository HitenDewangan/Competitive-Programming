#include<iostream>
using namespace std;

int main(){

    int n, m;
    cout<<"Enter number of rows and columns for matix A: ";
    cin>>m>>n;
    int a[m][n];
    // taking input for matrix A
    cout<<"Enter elements : \n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin>>a[i][j];
        }
    }

    cout<<"===================================\n";

    int p, q;
    cout<<"Enter number of rows and columns for matrix B: ";
    cin>>p>>q;
    int b[p][q]; 
    // taking input for matrix B
    cout<<"Enter elements : \n";
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            cin>>b[i][j];
        }
    } 

    cout<<"===================================\n";

    if(n != p) cout << "Matrix Multiplication not possible !!!";

    int c[m][q];  // matrix for storing product of A and B
    for(int i=0; i<m;i++){
        for(int j=0; j<q; j++){
            c[i][j] = 0;
        }
    }

    int rowA = 0;
    while(rowA < m){
        int colB = 0;
        for(int i=0; i<q; i++){  // q is the number of columns of B
            int j=0;
            while(j<p){  // n and p are equal
                c[rowA][colB] += a[rowA][j] * b[j][colB];
                j++;
            }
            colB++;
        }
        rowA++;
    }

    // printing the product matrix;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            cout<<c[i][j]<<" "; 
        }
        cout<<endl;
    }

}