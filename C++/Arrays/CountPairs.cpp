// count pairs "ag" in the character array
#include<iostream>
#include<vector>
using namespace std;

int pairs(vector<char> ch, int n){

    int count = 0, pairs = 0;
    for(int i=n-1; i>=0; i--){
        if(ch[i] == 'g'){
            count++;
        }
        if(ch[i] == 'a'){
            pairs += count;
        }
    }

    return pairs;
}

int main(){
    vector<char> ch = {'a', 'd', 'g', 'a', 'g', 'a', 'g', 'f', 'g'};
    cout<<pairs(ch, ch.size())<<endl;

    vector<char> ch2 = {'b', 'a', 'a', 'g', 'd', 'c', 'a','g'};
    cout<<pairs(ch2, ch2.size())<<endl;

    return 0;
    
}