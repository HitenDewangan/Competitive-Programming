/*
Given an m x n matrix, return all elements of the matrix in spiral order.


Example 1:
Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,3,6,9,8,7,4,5]

*/
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        vector<int> ans;

        int m = matrix.size();
        int n = matrix[0].size();

        int row_start = 0, row_end = m-1, col_start = 0, col_end = n-1;
        
        while(row_start <= row_end && col_start <= col_end){
            
            // for top row
            for(int col=col_start; col<=col_end; col++){
                ans.push_back(matrix[row_start][col]);
            }
            row_start++;

            //for last column
            for(int row = row_start; row<=row_end; row++){
                ans.push_back(matrix[row][col_end]);
            }
            col_end--;

            //for bottom row
            for(int col = col_end; col>=col_start; col--){
                ans.push_back(matrix[row_end][col]);
            }
            row_end--;

            //for start column
            for(int row = row_end; row>=row_start; row--){
                ans.push_back(matrix[row][col_start]);
            }
            col_start++;
        }

        return ans;
    }
};

int main(){

    vector<vector<int>> matrix = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};

    vector<int> ans = Solution().spiralOrder(matrix);

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}