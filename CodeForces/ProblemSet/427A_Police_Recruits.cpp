#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int crimes_untreated = 0;
    int police = 0;
    int x;
    for(int i=0; i<n; i++){
        cin>>x;
        if(x == -1){
            if(police != 0){
                police--;
            }
            else{
                crimes_untreated++;
            }
        }
        else{
            police += x;
        }
    }

    cout<<crimes_untreated<<endl;
}