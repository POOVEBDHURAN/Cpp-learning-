/*)You are given a rectangular matrix, and your task is to return an 
array while traversing the matrix in spiral form.*/
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
 vector<int> spirallyTraverse(vector<vector<int>>& matrix) {
 // Your code here 
 return {};
 }
};
int main() {
 // Example usage
 vector<vector<int>> matrix = {
 {1, 2, 3},
 {4, 5, 6},
 {7, 8, 9}
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
