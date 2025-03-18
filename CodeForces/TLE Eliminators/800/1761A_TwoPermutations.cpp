#include <iostream>
#include <cmath>

using namespace std;


int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, a, b;
        cin>>n>>a>>b;

        if(a == n && n == b){
            cout<<"YES"<<endl;
            continue;
        }

        if((a >= n/2 || b>=n/2)&& a+b > n-2) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
        
    }

    return 0;
}
