#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int *a = new int[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    const int N = 1e6+2;  // 10^6 + 2
    bool *check = new bool[N];
    for(int i=0; i<N; i++){
        check[i] = false;
    }

    for (size_t i = 0; i < n; i++){
        if(a[i] >= 0){
            check[a[i]] = true;
        }
    }

    for (size_t i = 1; i < N; i++){   // i=1 because 0 is not a positive number
        if(check[i] == false){
            cout<<i<<endl;
            return 0;
        }
    }

    cout<<-1<<endl;

    delete []a;
    delete []check;
  
    
}