// Check whether a string is a subsequence of another string

#include<iostream>
using namespace std;
int main() {
    string a = "ababcda";
    string b = "dc";
    
    int i=0, j=0;
    while (i<a.size() && j<b.size()){
        if (a[i] == b[j]){
            i++;
            j++;
        }
        else {
            i++;
        }
    }
    if(j==b.size()){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}