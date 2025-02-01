#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxFreeTime(int eventTime, int k, vector<int>& startTime, vector<int>& endTime) {
        int n = startTime.size();
        vector<pair<int, int>> meetings(n);
        for (int i = 0; i < n; i++) {
            meetings[i] = {startTime[i], endTime[i]};
        }
        sort(meetings.begin(), meetings.end(), [](pair<int, int>& a, pair<int, int>& b) {
            return a.second < b.second;
        });

        int maxFreeTime = 0;
        int lastEndTime = 0;

        for (int i = 0; i < n; i++) {
            int freeTime = meetings[i].first - lastEndTime;
            maxFreeTime = max(maxFreeTime, freeTime);

            if (k > 0) {
                int newEndTime = meetings[i].first + (meetings[i].second - meetings[i].first);
                if (newEndTime <= eventTime) {
                    freeTime = max(freeTime, eventTime - newEndTime);
                    maxFreeTime = max(maxFreeTime, freeTime);
                }
                k--;
            }

            lastEndTime = meetings[i].second;
        }

        maxFreeTime = max(maxFreeTime, eventTime - lastEndTime);
        return maxFreeTime;
    }
};

int main() {
    Solution solution;
    vector<int> startTime = {0, 2, 9};
    vector<int> endTime = {1, 4, 10};
    int eventTime = 2;
    int k = 2;
    int result = solution.maxFreeTime(eventTime, k, startTime, endTime);
    cout << "Maximum free time: " << result << endl;
    return 0;
}