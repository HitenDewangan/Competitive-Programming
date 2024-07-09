// program to print all subsets of a set
#include <iostream>
using namespace std;

void subsets(int arr[], int n){
    for(int i=0; i<(1<<n); i++){
        for(int j=0; j<n; j++){
            if(i & (1<<j)){
                cout << arr[j] << " ";
            }
        }
        cout << endl;
    }
}

int main(){
    int arr[] = {1, 2, 3};
    subsets(arr, 3);
    return 0;
}

/* EXPLANATION : when jth bit of i is 1, then jth element is included in the subset
i=0,binary = 000,    j=0,1,2    -->i & (1<<j)   --> 000 --> empty set
i=1,binary = 001,    j=0,1,2    -->i & (1<<j)   --> 001 --> {1}  
i=2,binary = 010,    j=0,1,2    -->i & (1<<j)   --> 010 --> {2}
i=3,binary = 011,    j=0,1,2    -->i & (1<<j)   --> 011 --> {1, 2}
i=4,binary = 100,    j=0,1,2    -->i & (1<<j)   --> 100 --> {3}
i=5,binary = 101,    j=0,1,2    -->i & (1<<j)   --> 101 --> {1, 3}
i=6,binary = 110,    j=0,1,2    -->i & (1<<j)   --> 110 --> {2, 3}
i=7,binary = 111,    j=0,1,2    -->i & (1<<j)   --> 111 --> {1, 2, 3}


OUTPUT :
001 --> {1}
010 --> {2}
011 --> {1, 2}
100 --> {3}
101 --> {1, 3}
110 --> {2, 3}
111 --> {1, 2, 3}
*/