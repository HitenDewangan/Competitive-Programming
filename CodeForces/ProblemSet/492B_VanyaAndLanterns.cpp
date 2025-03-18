#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {
    int n, l;
    cin >> n >> l;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    double maxDistance = 0.0;

    maxDistance = max(maxDistance, static_cast<double>(a[0]));
    maxDistance = max(maxDistance, static_cast<double>(l - a[n - 1]));

    for (int i = 0; i < n - 1; ++i) {
        maxDistance = max(maxDistance, static_cast<double>(a[i + 1] - a[i]) / 2.0);
    }

    cout << fixed << setprecision(10) << maxDistance << endl;

    return 0;
}