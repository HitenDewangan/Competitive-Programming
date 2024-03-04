#include <bits/stdc++.h> 
using namespace std; 
  
// Prints diamond pattern with 2n rows  
void printDiamond(int n)  
{  
    int space = n - 1;  
    
    for (int i = 0; i < n; i++)  
    {  
        for (int j = 0;j < space; j++)  
            cout << " ";  

        for (int j = 0; j <= i; j++)  
            cout << "* ";  
  
        cout << endl;  
        space--;  
    }  
}

int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;

    printDiamond(n);
}