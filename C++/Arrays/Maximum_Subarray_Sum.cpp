#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;

    int *a = new int[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int *currSum = new int[n+1];
    currSum[0] = 0;
    for(int i=1; i<=n; i++){                  //This is prefix Sum
        currSum[i] = currSum[i-1] + a[i-1];
    }

    int maxSum = INT_MIN;
    for(int i=1; i<=n; i++){
        int sum = 0;
        for(int j=0; j<i; j++){
            sum = currSum[i] - currSum[j]; // i constant , j= 0,...i-1
            maxSum = max(maxSum, sum);
        }
    }
    cout<<maxSum<<endl;
    return 0;

}

/*Overall, this code implements a better approach(O(n^2)) than brute force approach(O(n^3)). The idea is to find the maximum contiguous subarray sum. There exists a more efficient algorithm called Kadane's algorithm that solves this problem in linear time (O(n)).*/

// Space Complexity: O(1) in all cases