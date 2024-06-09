// Codeforces: 1761A - Two Permutations

#include <iostream>
#include <string>

using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
            int n, a, b;
            cin>>n>>a>>b;
        
            int arr[n];
            
            for (int i = 0; i < n; i++) {
                arr[i] = i+1;
            }
            
            
            if(to_string(arr[0]).length() == a && to_string(arr[n-1]).length() == b){
                if(n%3 != 0){
                    cout<<"YES"<<endl;
                }

                else{
                    cout<<"NO"<<endl;
                }
                
            }
            else{
                cout<<"NO"<<endl;
            }
            
    }
    
}