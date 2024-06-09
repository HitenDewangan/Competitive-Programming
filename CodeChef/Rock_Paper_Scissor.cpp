#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    
        string s;
        cin>>s;

	    int *a = new int[n];
	    for(int i=0; i<n; i++){
	        a[i] = s[i];
	    }

        vector<int> b(n);
        b[0] = 1;

        for(int i=1; i<n; i++){
            if(a[i] == a[i-1] && b[i-1] == 1){
                b[i] = 0;
            }
            else{
                b[i] = 1;
            }
        }

        delete[] a;     // to free th memory
	    
	    int wins = 0; 
	    for(int el : b){
	        wins += el;
	    }

        cout<<wins<<endl;
	    
	}
    
}

