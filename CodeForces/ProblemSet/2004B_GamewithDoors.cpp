#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int l,r, L,R;
        cin>>l>>r>>L>>R;
        if(r<L || R<l){     // no overlap
            cout<< 1 <<endl;
        }
        else if(r==L || R==l){    // just touching ends
            cout<< min(r-l, R-L)+1 <<endl;
        }
        else if(l==L && r==R){   // overlapping
            cout<< R-L <<endl;
        }
        else if((r==R && l!=L) || (l==L && r!=R)){   
            cout<< min(r-l+1, R-L+1) <<endl;
        }
        else if((l>=L && r<=R) ||(L>=l && R>=r)){   // one partially inside other
            cout<< min(r-l+1, R-L+1) <<endl;   
        }
        else{
            cout<< min(r-l+2, R-L+2) <<endl;  // one totally inside other
        }
    }
}