#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    
	    int *a = new int[n];
	    for(int i=0; i<n; i++){
	        cin>>a[i];
	    }
	    
	    if(n==1 && a[0]%2 == 0){        // special case
	        cout<<"1"<<endl;
	        continue;
	    }
        else if(n==1 && a[0]%2 != 0){
            cout<<"0"<<endl;
            continue;
	    }
	    
	    int sum = 0, smax = 0, i=0, left_oddi = 0, right_oddi = 0;
	    
    // find the index of first odd element from left
	    while(i<n){
	        sum = sum + a[i];       
	        if(a[i]%2 != 0){   // odd and sum is not even
                right_oddi = i;
	        }
            i++;
        }
            
        

        if(sum%2 == 0){
            cout << n << endl;
            continue;
        }

    // find the index of first odd element from right
        for(int i=0; i<n; i++){
            if(a[i]%2 != 0){
                left_oddi = i;
                break;
            }
        }
	    
    // find the max subarray length 
	    if(sum%2 != 0){
	        smax = max(n-1-left_oddi, right_oddi);
	    }
	   
	    cout<<smax<<'\n';
	}

}
