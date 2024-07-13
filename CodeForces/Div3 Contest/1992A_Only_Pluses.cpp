#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b, c;
        cin>>a>>b>>c;
         
        int Fmin;
        for(int i=0; i<5; i++){
            Fmin = min(a, min(b,c));
            if(Fmin == a) a++;
            else if(Fmin == b) b++;
            else c++;
        }

        cout<<a*b*c<<endl;
        
    }
}