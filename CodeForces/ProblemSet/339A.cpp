//A. Helpful Maths
//Problem Link: https://codeforces.com/problemset/problem/339/A

//---------------------------------------------------------------------------------------
#include<iostream>
#include<vector>
#include<string>

using namespace std;

// void insertionSort(vector<int>& arr){
//     for(int i=1; i<n; i++){
//         int current = arr[i];
//         int j = i-1;
//         while(arr[j]>current && j>=0){
//             arr[j+1] = arr[j];
//             j--;
//         }
//         arr[j+1] = current;
//     }
// }

void selectionSort(vector<int>& A){
    int n = A.size();
    for(int i=0; i<n-1; i++){
        int min = i;
        for(int j=i+1; j<n; j++){
            if(A[j] < A[min]){
                int temp = A[j];
                A[j] = A[min];
                A[min] = temp;
            }
        }
    }
}

int main(){
    string s;
    cin>>s;

    vector<int> arr;
    int pointer = 0;
    for(int i=0; i<s.size(); i++){
        
        if (isdigit(s[i])) {
            continue;
        } 
        else if (s[i] == '+') {
            arr.push_back(stoi(s.substr(pointer, i - pointer)));  // Extract number and push to vector, starting at pointer and covering length = i - pointer
            pointer = i + 1;  
    }

    }
    arr.push_back(stoi(s.substr(pointer)));

    selectionSort(arr);


    for(size_t i = 0; i < arr.size(); i++){
        cout << arr[i];
        if(i < arr.size() - 1){
            cout << "+";
        }
    }

    return 0;
}