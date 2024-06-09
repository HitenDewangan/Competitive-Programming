// https://codeforces.com/problemset/problem/1335/C

#include <iostream>
#include <unordered_map>
#include <algorithm>

#define endl "\n"

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long int n;
        cin>>n;

        long int *students = new long int[n];
        for(int i=0; i<n; i++){
            cin>>students[i];
        }

        if(n==1){      // if only one student then can't make two teams
            cout<<0<<endl;
            continue;
        }

        unordered_map<int, int> m;
        for(int i=0; i<n; i++){
            m[students[i]]++;
        }

        int siz = m.size();  // size = number of unique students

        if (siz == n){  // if all are unique, the can have only one student in each team
            cout<<1<<endl;
            continue;
        }

        int max_freq = 0;
        for(auto it = m.begin(); it != m.end(); it++){
            max_freq = max(max_freq, it->second);
            
        }

        delete[] students;

        cout<< max( min(max_freq-1, siz), min(siz-1, max_freq)) <<endl;
    }
}

//time complexity = O(n)
//space complexity = O(n)

// Tip : we can improve the space complexity by directly taking input in the map and at same time, also updating the max_freq