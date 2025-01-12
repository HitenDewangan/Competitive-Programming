#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, a, b;
        cin>>n>>a>>b;
        //  distance between them should be odd
        if (abs(a-b-1)%2 == 1) {
            cout<<"YES"<<endl;  
        } else {
            cout<<"NO"<<endl;   
        }
    }
    return 0;
}
