#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;

        string s = to_string(a);
        if(s.size() == 1){
            cout<<"NO"<<endl;
        }
        else if(s.size() == 3){
            if(s.back() >= '2'){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else if(s.size() >= 4){
            if(s.substr(0,3) == "100"){
                cout<<"NO"<<endl;
            }
            else if(s.substr(0, 2) == "10" && s.substr(s.size()-2, 1) == "1" && s.back() >= '0'){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }


    }
}
