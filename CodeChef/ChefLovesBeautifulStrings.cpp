#include<iostream>
using namespace std;
typedef long long ll;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        int n,m;cin>>n;
        string s;cin>>s;
        ll jora=0,c=0;
        
        for (int i = 0; i <n-1; i++)
        {
            if(s[i]!=s[i+1]) c++;
            else jora++;
        }
        ll ans=jora*c;
        ans+=(c*(c-1LL))/2LL;
        cout<<ans<<"\n";
    }
}


//  4 3 5 3 4 5