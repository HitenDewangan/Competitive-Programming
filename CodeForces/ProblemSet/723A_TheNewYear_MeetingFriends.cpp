#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    
    int maxel = INT_MIN;
    int minel = INT_MAX;
    vector<int> a(3);
    for(int i=0; i<3; i++){
        cin>>a[i];
        maxel = max(maxel, a[i]);
        minel = min(minel, a[i]);
    }

    cout<<maxel-minel<<endl;


}