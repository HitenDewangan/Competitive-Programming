#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<pair<int, int>> teams(n); // Store home and guest uniforms for each team

    for (int i = 0; i < n; ++i) {
        cin >> teams[i].first >> teams[i].second; // Read home and guest uniforms
    }

    multiset<int> home_uniforms;
    for (int i = 0; i < n; ++i) {
        home_uniforms.insert(teams[i].first); // Insert home uniforms into the multiset
    }

    int count = 0;
    for (int i = 0; i < n; ++i) {
        count += home_uniforms.count(teams[i].second); // Count occurrences of guest uniforms in home uniforms
    }

    cout << count << endl;
    return 0;
}