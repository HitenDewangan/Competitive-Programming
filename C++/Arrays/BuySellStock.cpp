#include <iostream>
#include<vector>
using namespace std;

void maxProfit(vector<int>& arr){
    int n = arr.size();
    int minPrice = arr[0], maxPro = 0;
    for(int i = 1; i < n; i++){
        if(arr[i] < minPrice){
            minPrice = arr[i];
        } else {
            maxPro = max(maxPro, arr[i] - minPrice);
        }
    }
    cout << maxPro << endl;
}

int main()
{
    int n; 
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    maxProfit(arr);
    return 0;
}