#include <bits/stdc++.h> 
using namespace std; 

// 2*n rows and cols
void Butterfly(int n)  
{  
     
  
    for (int i=1; i<=n; i++) {
        int space = (2*n)-2*i; 

        for (int j=1; j<=i; j++)  
            cout << "*";  
   
        for (int j=1; j<=space; j++)  
            cout << " ";  
        
        for(int j=1; j<=i; j++)  
            cout << "*";

        cout << endl;  
        space-=2;  
    }  
  
  
    for (int i=n; i>=1; i--){  
        int space = (2*n)-2*i;
        for (int j = 1; j<=i; j++)  
            cout << "*";  
  
        for (int j=0; j < space; j++)  
            cout << " "; 

        for(int j=1; j<=i; j++)  
            cout << "*";
  
        cout << endl; 
        space += 2;  
    }  
}  
  
// Driver code  
int main()  
{   int n;
    cin>>n;
    Butterfly(n);  
}