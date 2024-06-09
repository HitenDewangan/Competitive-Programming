#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;

        set <char> st;
        for(int i=0;i<n;i++){
            st.insert(s[i]);   // inserting all the elements in set to get unique elements
        }

        map <int, char> mp;
        int ind = 0;
        for(char i : st){
            mp[ind] = i;
            ind++;             // maping index to set elements in ordered way
        }

        vector<char> v;
        for(char i : st){
            v.push_back(i);   // pushing all the elements in vector
        }

        int l = v.size();
        int temp;
        for(int i=0; i<n; i++){
            temp = find(v.begin(), v.end(), s[i]) - v.begin();
            s[i] = v[l-temp-1];
        }

        cout<<s<<endl;

    }
}

// status : done