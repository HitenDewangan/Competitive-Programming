#include <iostream>
// #include <vector>
# include <map>

using namespace std;

int main() {
    int n;
    cin >> n;

    map<int, int> mp;

    for(int i=1; i<=n; i++){
        int x;
        cin>>x;
        mp[x] = i; 
    }


    for(int i=1; i<=n; i++){
        cout<<mp[i]<<" ";
    }
    
    return 0;
}

// int main(){
//     vector<int> p(n);
//     vector<int> result(n);
    
//     // Read the input
//     for (int i = 0; i < n; ++i) {
//         cin >> p[i];
//     }
    
//     // Determine who gave gifts to whom
//     for (int i = 0; i < n; ++i) {
//         result[p[i] - 1] = i + 1;
//     }
    
//     // Print the result
//     for (int i = 0; i < n; ++i) {
//         cout << result[i] << " ";
//     }
//     cout << endl;
// }
    