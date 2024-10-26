#include<iostream> 
#include<vector>
using namespace std;

int minSwaps(vector<int> a, int B){
    int n=a.size();
    
    vector<int> position;
    int count=0;   
    for(int i=0; i<n; i++){
        if(a[i] < B){
            count++;
            position.push_back(i);
        }
    }

    // go1 = gap of one , go0 = gap of zero
    int swaps = 0, go0 =0, go1 = 0;
    for(int i=0; i<position.size()-1; i++){
        int currswap = abs(position[i]-position[i+1]) -1;
        if(currswap == 0) go0++;
        else if(currswap == 1) go1++;
    }

    return ( count - (go0*2) - (go1%2) );

    // goz will cover 2 elements and goo will settle two elements
}

int main(){

    int n;
    cin>>n;

    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int B;
    cin>>B;

    cout<<minSwaps(a, B)<<"\n";

}