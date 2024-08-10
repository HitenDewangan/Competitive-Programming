#include<iostream>
using  namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n, m;
	    cin>>n>>m;
	    
	    if(m%n == 0)
	        cout<<0<<endl;
	    else if(m<n)
	        cout<< n-m <<endl;
	    else{
	        int remain = m%n;
	        
	        if(remain < n/2.0)
	            cout<< remain <<endl;
	        else
	            cout<< n-remain <<endl;
	    }
	}

}
