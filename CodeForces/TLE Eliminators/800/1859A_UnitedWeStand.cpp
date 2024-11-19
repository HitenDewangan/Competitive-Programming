#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t; 
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);

        for (int i=0; i<n; i++){
            cin>>a[i];
        }


        // edge case : if all are same
        int first = a[0];
        int count = 1;
        for(int i=1; i<n; i++){
            if(a[i] == first){
                count++;
            }
        }
        if(count == n){
            cout<<-1<<endl;
            continue;
        }

        vector<int> b, c;
        sort(a.begin(), a.end());

        int last = a[n-1];
        c.push_back(last);
        int i=n-2;
        while(a[i] == last){
            c.push_back(a[i]);
            i--;
        }
        while(i>=0){
            b.push_back(a[i]);
            i--;
        }

        // print b's and c's size
        cout<<b.size()<<" "<<c.size()<<endl;

        // print b and c
        for(int i=0; i<b.size(); i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
        for(int i=0; i<c.size(); i++){
            cout<<c[i]<<" ";
        }
        cout<<endl;
    }
}

// note : one approach is to find first and second largest elemets. 
// If they are not same, then we can definitely find a solution.