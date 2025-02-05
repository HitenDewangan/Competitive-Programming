// #include <bits/stdc++.h>
// using namespace std;


// #define ll long long
// #define vi vector<int>

// const int MOD = 1e9 + 7;
// const int MAXN = 1e5 + 5;
// const ll PI = 3.14159265358979323846;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n,k; cin>>n>>k;

//     int i=1, cnt = 0, timeLeft = 240-k;
//     while(i<=n && timeLeft-5*i >= 0){
//             timeLeft -= 5*i;
//             cnt++;
//             i++;
//         }
    
//     cout << cnt << endl;
        
// }

#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    int timeLeft = 240 - k;

    int low = 0, high = n;
    int ans = 0; // Store the answer

    while (low <= high) {
        int mid = low + (high - low) / 2; // Prevent potential overflow
        int timeNeeded = mid * (mid + 1) / 2 * 5; // Sum of arithmetic series

        if (timeNeeded <= timeLeft) {
            ans = mid; // Possible answer, try for a larger one
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << ans << endl;

    return 0;
}