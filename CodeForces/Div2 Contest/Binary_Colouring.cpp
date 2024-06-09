#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        
        int i = 0;
        int req = pow(2,i);
        while(req < x){
            i++;
        }

        vector<int> ans(i);

        int left = pow(2,i) - x;

        if(left % 2 == 0){
            ans.insert(ans.begin(), 0);
        }
        else{
            ans.insert(ans.begin(), 1);
        }

        int j = 0;

        int low = pow(2,j);
        while((req - low) != left){
            j++;
        }
}

// status : not done