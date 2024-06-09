#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        
        vector<pair<int, int>> spells(N);
        for (int i = 0; i < N; ++i) {
            cin >> spells[i].first >> spells[i].second; // V_i and A_i
        }

        int max_strength = 0;

        for (int i = 0; i < N; ++i) {
            for (int j = i + 1; j < N; ++j) {
                int Vi = spells[i].first;
                int Ai = spells[i].second;
                int Vj = spells[j].first;
                int Aj = spells[j].second;

                int combined_strength = Ai * Vj + Vi * Aj;
                max_strength = max(max_strength, combined_strength);
            }
        }

        cout << max_strength << endl;
    }

    return 0;
}