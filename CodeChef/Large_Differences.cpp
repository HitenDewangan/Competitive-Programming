#include<iostream>

using namespace std;


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;
        int *a = new int[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        if(n==2){   // if has only 2 elements
            cout<<abs(a[0] - a[1])<<'\n';
            continue;
        }

        int maxx = 0;
        for(int i=0; i<n; i++){     
            int temp = a[i];
            int curr = 0;
            a[i] = k;
            for(int j=0; j<n-1; j++)         // cheking max by replacing a[i] with 1
            {
                curr += abs(a[j]-a[j+1]);
            }

            maxx = max(maxx, curr);
            a[i] = 1;
            curr = 0;
            for(int j=0; j<n-1; j++)          // checking max by replacing a[i] with k
            {
                curr += abs(a[j]-a[j+1]);
            }

            maxx = max(maxx, curr);
            a[i] = temp;          // again maintaining the original array
        }
        cout<<maxx<<'\n';

           
    }
}


// status : Done