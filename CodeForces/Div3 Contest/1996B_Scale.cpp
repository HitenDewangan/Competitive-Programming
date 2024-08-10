#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test_cases;
    cin >> test_cases;

    while (test_cases--) {
        int n, k;
        cin >> n >> k;

        vector<string> grid(n);
        for (int i = 0; i < n; ++i) {
            cin >> grid[i];
        }

        int p = n / k;
        vector<string> new_grid(p, string(p, '0'));

        for (int i = 0; i < p; ++i) {
            for (int j = 0; j < p; ++j) {
                new_grid[i][j] = grid[i * k][j * k];
            }
        }

        for (const auto &row : new_grid) {
            cout << row << endl;
        }
    }

    return 0;
}
