#include<iostream>
#include<stack>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;

        stack<int> ans;
        int temp = n;
        while(temp--){
            char x;
            for(int i=0; i<4; i++){
                cin>>x;
                if(x == '#') ans.push(i+1);
            }
        }

        while(!ans.empty()){
            cout<<ans.top()<<" ";
            ans.pop();
        }
        cout<<endl;
    }
}