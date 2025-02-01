#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string findValidPair(string s) {
        unordered_map<char, int> mp;
        for(char ch : s){
            mp[ch]++;
        }
        
        string ans = "";
        for(int i=0; i<s.size()-1; i++){
            if(s[i] != s[i+1] && (stoi(string(1, s[i])) == mp[s[i]] && stoi(string(1, s[i+1])) == mp[s[i+1]])){
                return string(1, s[i]) + string(1, s[i+1]);
            }
        }
        return ans;
    }
};

int main(){
    Solution obj;
    string s = "2523533";
    cout<<obj.findValidPair(s)<<endl;
    cout<<obj.findValidPair("221")<<endl;
    return 0;
}