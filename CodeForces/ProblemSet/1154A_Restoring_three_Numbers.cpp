#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> a(4);
    int maxel=0, maxi;
	for (int i = 0; i < 4; ++i) {
		cin >> a[i];
        if(a[i]>maxel){
            maxel=a[i];
            maxi = i;
        } 
	}

    for(int i=0; i<4; i++){
        if(i!=maxi) cout << maxel -a[i] << " ";
    }

    cout << endl;
	
}