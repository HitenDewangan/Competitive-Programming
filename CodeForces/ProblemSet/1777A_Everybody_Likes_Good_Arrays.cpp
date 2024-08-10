#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        int *a = new int[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int i=0;
        int op = 0;
        while(i<n-1){
            if((a[i]%2 ==0 && a[i+1]%2 ==0) || a[i]%2 !=0 && a[i+1]%2 !=0){
                a[i] *= a[i]*a[i+1];
                op++;
            }
            i++;
        }
        
        cout<<op<<endl;

        delete[] a;
    }
}