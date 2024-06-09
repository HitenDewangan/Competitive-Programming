#include<iostream>
#include<string>
#include<map>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;

    //taking all the teams as input
    vector<string> teams;
    string temp;
    while (n--)
    {
        cin>>temp;
        teams.push_back(temp);
    }

    //counting the goal scored by each team
    map<string, int> mp;
    for(int i=0; i<teams.size(); i++){
        mp[teams[i]]++;
    }

    // find max of mp
    int max = 0;
    for(auto it: mp){
        if(it.second > max){
            max = it.second;
        }
    }

    for(auto it: mp){
        if(it.second == max){
            cout<<it.first<<endl;
            return 0;
        }

    }
}