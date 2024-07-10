// get the length of the largest word and print that word from the sentence

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    char* a = new char[n+1];
    cin.getline(a, n);
    cin.ignore();

    cout<<a<<endl;

    int i=0, currLen=0, maxLen=0;
    int st=0, max_st=0;
    
    while(a[i] != '\0'){
        if(a[i] == ' ' || a[i] == '\0'){
            if(currLen > maxLen){
                maxLen = currLen;
                max_st = st;
            }
            currLen = 0;
            st = i+1;
        }
        else currLen++;
        if(a[i] =='\0') 
            break;

        i++;
    }

    cout<< maxLen <<endl;
    for(int i=max_st; i<maxLen; i++){
        cout<<a[i+max_st]<<"";
    }

}