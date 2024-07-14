#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int s,n;
    cin>>s>>n;

    vector<pair<int, int>> dragons(n); // Store dragon strength and bonus pairs
    for (int i = 0; i < n; ++i) {
        cin >> dragons[i].first >> dragons[i].second;
    }

    // Sort dragons in ascending order of their strength
    sort(dragons.begin(), dragons.end());

    for (auto dragon : dragons) {
        if (s <= dragon.first) {
            cout << "NO" << endl;
            return 0;
        }
        s += dragon.second; // Update Kirito's strength after defeating the dragon
    }

    cout << "YES" << endl;
    return 0;
}