//GeeksForGeeks : https://www.geeksforgeeks.org/problems/padovan-sequence2855/1

/*Given a number n, find the nth number in the Padovan Sequence.

A Padovan Sequence is a sequence which is represented by the following recurrence relation
P(n) = P(n-2) + P(n-3)
P(0) = P(1) = P(2) = 1

Note: Since the output may be too large, compute the answer modulo 10^9+7.

Input: n = 3
Output: 2
Explanation: We already know, P1 + P0 = P3 and P1 = 1 and P0 = 1

Input: n = 4
Output: 2
Explanation: We already know, P4  = P2 + P1 and P2 = 1 and P1 = 1
*/

#include <iostream>
using namespace std;

const int mod = 1e9+7;

int padovan(int n){     // to find nth number in padovan sequence

    if(n <= 2){
        return 1;
    }

    int a = 1, b = 1, c = 1, curr;

    for(int i=3; i<=n; i++){
        curr = (a + b)%mod;
        a = b;
        b = c;
        c = curr;
    }
    return curr;
}

int main(){

    int n;
    cin>>n;

    cout<<padovan(n);
}