#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string s = "bdjbndkjdjjhggcbjbihiwhig";

    int freq[26] = {0};
    for(int i=0; i<s.size(); i++){ 
        freq[s[i]-'a']++;
    }

    char ans = 'a';
    int maxF = 0;
    for(int i=0; i<26; i++){
        if(freq[i]>=maxF){
            maxF = freq[i];
            ans = 'a'+i;
            cout<<maxF<<" "<<ans<<endl;
        }
    }
    cout<<maxF<<" "<<ans<<endl;
}