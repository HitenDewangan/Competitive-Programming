#include <iostream>
using namespace std;


int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int totalMl = k * l;
    int totalSlices = c * d;    
    int totalSalt = p;
    int totalToasts = min(totalMl / nl, min(totalSlices, totalSalt / np)) / n;
    
    cout << totalToasts << endl;
}
