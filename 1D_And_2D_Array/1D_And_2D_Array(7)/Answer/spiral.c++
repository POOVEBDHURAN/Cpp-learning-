/*)You are given a rectangular matrix, and your task is to return an 
array while traversing the matrix in spiral form.*/
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
 vector<int> spirallyTraverse(vector<vector<int>>& matrix) {
       vector<int> result;
       int i,j;
       for(i=0;i<=matrix.size()/2;i++){
           for(j=i;j<=matrix.size()-i-1;j++){
               result.push_back(matrix[i][j]);
           }
           for(j=i+1;j<matrix[0].size()-i-1;j++){
               result.push_back(matrix[j][matrix[0].size()-i-1]);
           }
           for(j=matrix.size()-i-1;j>i;j--){
               result.push_back(matrix[matrix.size()-i-1][j]);
           }
           for(j=matrix[0].size()-i-1;j>i;j--){
               result.push_back(matrix[j][i]);
           }
       }
       return result;
    }
};
int main() {
 // Example usage
 vector<vector<int>> matrix = {
 {1, 2, 3,10,17},
 {4, 5, 6,11,18},
 {7, 8, 9,12,19},
 {13,14,15,16,20},
 {21,22,23,24,25}
 };
 Solution sol;
 vector<int> result = sol.spirallyTraverse(matrix);
 cout << "Spiral order: ";
 for (int val : result) {
 cout << val << " ";
 }
 cout << endl;
 return 0;
}

/*Test cases
1)Input: matrix[][] = [[1, 2, 3, 4],[5, 6, 7, 8],[9, 10, 11, 12],[13, 14, 15,16]]
Output: [1, 2, 3, 4, 8, 12, 16, 15, 14, 13, 9, 5, 6, 7, 11, 10]
2)Input: matrix[][] = [[1, 2, 3, 4] [5, 6, 7, 8][9, 10, 11, 12]]
Output: [1, 2, 3, 4, 8, 12, 11, 10, 9, 5, 6, 7]
*/
