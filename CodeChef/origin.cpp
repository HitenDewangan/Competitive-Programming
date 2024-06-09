#include<iostream>
#include<cmath>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        int sum = 0;
        int i;
        
        int total_sum = 0;
        
        for(int i=1; i<=n; i++){
            if(i>9){
                while(i/10 != 0){
                    sum += i%10;
                    i /= 10;
                }
                sum += i;
            
                total_sum += sum;
            }
            else{
                total_sum += i;
            }
        }
        
        cout<<total_sum<<'\n';
    }
}