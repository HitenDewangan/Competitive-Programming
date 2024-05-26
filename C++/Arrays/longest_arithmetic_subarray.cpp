//longest subarray whose difference b/w consecutive elements is same and subarray must have at least 2 elements


#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int *a = new int[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }


    int ans = 2;    //minimum length of desired the subarray must be 2
    int pd = a[1] - a[0];   // for storing previous common difference
    int j = 2;
    int curr = 2;    //for storing current length including Ai

    while(j<n){
        if(pd == a[j] - a[j-1]){
            curr ++;
        }
        else{
            pd = a[j] - a[j-1];
            curr = 2;   //since here streak gets break
        }
        ans = max(ans, curr);
        j++;
    }

    
    cout<<"Length of longest Arithmetic array is : "<<ans<<endl;

    return 0;
}
