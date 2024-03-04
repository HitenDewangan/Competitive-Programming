#include <bits/stdc++.h> 
using namespace std; 
  
// Prints diamond pattern with 2n rows  
void printDiamond(int n)  
{  
    int space = n - 1;  
  
    for (int i=0; i<n; i++)  {
        for (int j=0; j<space; j++)  
            cout << " ";  
   
        for (int j=0; j<=i; j++)  
            cout << "* ";  
  
        cout << endl;  
        space--;  
    }  
  
    space = 1;  
  
    for (int i=n-1; i>0; i--){  
        for (int j = 0; j<space; j++)  
            cout << " ";  
  
        for (int j=0; j < i;j++)  
            cout << "* "; 
  
        cout << endl; 
        space++;  
    }  
}  
  
// Driver code  
int main()  
{   int n;
    cin>>n;
    printDiamond(n);  
}