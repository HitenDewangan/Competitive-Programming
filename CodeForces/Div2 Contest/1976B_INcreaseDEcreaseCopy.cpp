#include<iostream>
#include<vector>

using namespace std;

#define INT_MAX 1e9

long long min_Operations(long long last, vector<long long> &a, vector<long long> &b, int n){
    //counting the number of operations
        long long min_oper = INT_MAX;               

        for(int i=0; i<n; i++){
            if((a[i]>last && b[i]<last) || (a[i]<last && b[i]>last)){
                return 0;
            }
            if(a[i]==last || b[i]==last){
                return 0;
            }
            if(a[i]>last && b[i]>last){
                min_oper = min(min_oper, min(a[i], b[i])-last);
            }
            if(a[i]<last && b[i]<last){
                min_oper = min(min_oper, last-max(a[i], b[i]));
            }
        }
        return min_oper;
}

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector<long long> a(n), b(n+1);
    
    //taking array a input n elements
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

    // taking array b input n+1 elements
        for(int i=0; i<=n; i++){
            cin>>b[i];
        }

    // calculating operations
    long long count = 1;
    for(int i=0; i<n; i++){
        count += (abs(a[i] - b[i]));
    }

    count += min_Operations(b[n], a, b, n);
    cout << count << endl;
    }


    
}

//status : DOne