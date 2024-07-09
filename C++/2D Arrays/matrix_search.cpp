/* Given a matrix where each row is sorted from left to right and each column is sorted from top to bottom

we have to search for an element if it exists in the matrix or not
*/

#include<iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter number of rows and columns: ";
    cin>>n>>m;

    int target;
    cout<<"Enter the target element : ";
    cin>>target;

    cout<<"Enter elements of the matrix"<<endl;;
    int a[m][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }

    // taking top right position
    int r=0, c=m-1;
    bool found = false;
    while(r<n && c>=0){
        if(target == a[r][c]){
            found = true;
            break;
        }
        else if(target > a[r][c]) 
            r++;
        else 
            c--;
    }

    if(found)
        cout<<"Element found !"<<endl;
    else
        cout<<"Element does not exist !"<<endl;

}