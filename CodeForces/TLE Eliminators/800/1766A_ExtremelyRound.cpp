#include <iostream>
#include <cmath>

using namespace std;

int countExtremelyRound(int n) {
    int d = floor(log10(n)) + 1;
    int firstDigit = floor(n / pow(10, d - 1));
    // cout<< "d: "<<d<<endl;
    // cout<< "firstDigit: "<<firstDigit<<endl;
    return 9 * (d - 1) + firstDigit;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        cout << countExtremelyRound(n) << endl;
    }

    return 0;
}