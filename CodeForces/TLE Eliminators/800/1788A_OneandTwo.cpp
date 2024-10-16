#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

#define ull unsigned long long

int PrefixPro(int n, vector<int> v){
    vector<ull> p(n+1, 1);
    for(int i=0; i<n; i++){
        p[i+1] = p[i]*v[i];
    }

    ull sqrt_last = sqrt(p.back());
    for(int i=1; i<n+1; i++){
        if(p[i] == sqrt_last){
            return i;
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int> v(n);

        int count_1 = 0, count_2 = 0;

        for(int i=0; i<n; i++){
            cin>>v[i];
            if(v[i] == 1) count_1++;
            else count_2++;
        }

        if (count_2%2 != 0){ // if 2 in odd no. the never possible
            cout<<-1<<endl;
            continue;
        }
        if (count_1 == n){ // if all 1's then index 1 is smalles (1 based indexing)
            cout<<1<<endl;
            continue;
        }
        if (count_2 == n && n/2 == 0){ // if all 2's then half is smallest index where both side equal
            cout<<n/2<<endl;
            continue;
        }

        cout<<PrefixPro(n, v)<<endl;
        
    }
}
