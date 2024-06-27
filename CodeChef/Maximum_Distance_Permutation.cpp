#include<iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    
	    if(n==1){
	        cout << 1 << endl << 1 << endl;
	        continue;
	    }
	    
	    for(int i = 1; i <= n; i++){
	        cout << i << " ";
	    }
	    cout << endl;
	    
	    for(int i = (n/2)+1; i <= n; i++){
	        cout << i << " ";
	    }

        for(int i = 1; i <= (n/2); i++){
            cout << i << " ";
        }
        cout << endl;
	}

}