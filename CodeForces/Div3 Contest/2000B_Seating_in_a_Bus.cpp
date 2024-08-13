#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> v;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            v.push_back(x);
        }

        set<int> occupied;
        bool possible = true;
        for (int i = 0; i < n; i++) {

            if(occupied.empty()){
                occupied.insert(v[i]);
                continue;
            }
            if (occupied.count(v[i] - 1) || occupied.count(v[i] + 1)) {
            }
            else{
                possible = false;
            }
            occupied.insert(v[i]);
        }

        cout << (possible ? "YES" : "NO") << endl;
    }

}
