#include<iostream>
using namespace std;

int main(){
    int n, s;
    cin>>n>>s;

    int *a = new int[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int i=0, j=0, st=-1, en=-1, currSum = 0;

    while(j<n && currSum + a[j] <= s){  // checking but not updating
        currSum += a[j];
        j++;
    }
    if(currSum == s){
        cout<<i+1<<" "<<j<<endl;
        return 0;
    }

    while(j<n){
        currSum += a[j];    // here we are updating currSum for last visited element
        while(currSum > s && i<j){  // checking and updating
            currSum -= a[i];
            i++;
        }
        if(currSum == s){
            st = i+1;         // for 1 based indexing updating st and en
            en = j+1;
            break;
        }
        j++;
    }

    if(st == -1 && en == -1){        // if no subarray found which can satisfy the given sum
        cout<<"-1"<<endl;
        return 0;
    }

    cout<<st<<" "<<en<<endl;

    return 0;

}