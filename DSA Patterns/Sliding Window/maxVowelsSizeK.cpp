#include <iostream>
#include <string>

using namespace std;

bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int maxVowels(string s, int k) {
    if (k > s.length()) {
        return 0;
    }

    int count = 0;
    for (int i = 0; i < k; ++i) {
        count += isVowel(s[i]);
    }

    int maxCount = count;
    for (int i = k; i < s.length(); ++i) {
        count += isVowel(s[i]) - isVowel(s[i - k]);
        maxCount = max(maxCount, count);
    }

    return maxCount;
}

int main() {
    string s;
    int k;
    cin >> s >> k;
    cout << maxVowels(s, k) << endl;
    return 0;
}