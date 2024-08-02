#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        if(n/10 == 0){
            cout<<1<<'\n'<<n<<'\n';
            continue;
        }

        // vector to store the round numbers
        vector<int> arr; 
        int count = 0, i = 1;
        while(n != 0){
            if(n%10 != 0){
                arr.push_back((n%10)*i);      
                count++;  
            }      
            n = n/10;
            i *= 10;
        }
        if(n != 0){
            arr.push_back(n*i);
            count++;
        }

        cout<<count<<'\n';
        for(int i=0; i<arr.size(); i++){
            cout<<arr[i]<<' ';
        }
        cout<<'\n';
    }
}