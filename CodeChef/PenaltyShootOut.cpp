#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x, y;
	    cin>>x>>y;
	    
	    if(x==y || (abs(x-y) <= 2 && x<=y)){
	        cout<<"YES\n";
	        continue;
	    } 
        else if(abs(x-y) == 1 && x>y){
            cout<<"YES\n";
            continue;
        }
	    
	    else{
	        cout<<"NO\n";
	    }
	    
	}

}
