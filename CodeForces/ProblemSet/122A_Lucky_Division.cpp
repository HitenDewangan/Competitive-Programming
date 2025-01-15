#include <iostream>
using namespace std;

// Function to check if a number is a lucky number
bool isLucky(int num) {
    while (num > 0) {
        int digit = num % 10;
        if (digit != 4 && digit != 7)
            return false;
        num /= 10;
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    // Check if n is divisible by any lucky number
    for (int i = 1; i <= n; ++i) {
        if (isLucky(i) && n % i == 0) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}
