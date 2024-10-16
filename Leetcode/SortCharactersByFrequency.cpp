#include<iostream>
#include<map>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    string frequencySort(string s) {
        map<char, int> mp;
        for(int i=0; i<s.size(); i++){
            mp[s[i]]++;
        }

        vector<pair<char, int>> vec;
        for(auto it = mp.begin(); it != mp.end(); it++){
            vec.push_back(*it);
        }

        sort(vec.begin(), vec.end(), [](auto &a, auto &b){return a.second > b.second;});

        string result;
        for(auto it = vec.begin(); it != vec.end(); it++){
            for(int i=0; i<it->second; i++){
                result += it->first;
            }
        }

        return result;
    }
};

// =================== main ====================

int main(){
    string s;
    cin>>s;
    Solution obj;
    cout<<obj.frequencySort(s);
}


// Input: s = "tree"
// Output: "eert"

// time complexity: O(nlogn)
// space complexity: O(n)