#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector< vector<int> > v(n, vector<int>(3));

    int x=0, y=0, z=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++){
            cin>>v[i][j];

            if(j==0) x+=v[i][j];
            else if(j==1) y+=v[i][j];
            else z+=v[i][j];
        }
    }

    if(x==0 && y==0 && z==0) cout<<"YES";
    else cout<<"NO";


}