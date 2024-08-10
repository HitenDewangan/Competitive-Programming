#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int min_cap = 0;
    int curr_cap = 0;
    
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;

        curr_cap = curr_cap - a + b;
        min_cap = max(min_cap, curr_cap);
    }
    
    cout << min_cap << endl;
}