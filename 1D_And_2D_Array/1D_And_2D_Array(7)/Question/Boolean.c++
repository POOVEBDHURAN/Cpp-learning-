/*)Given a boolean matrix of size RxC where each cell contains either 0 
or 1, modify it such that if a matrix cell matrix[i][j] is 1 then all the 
cells in its ith row and jth column will become 1.*/
class Solution
{ 
 public:
 void booleanMatrix(vector<vector<int> > &matrix)
 {
 // code here
 }
};
int main() {
 vector<vector<int>> matrix = {
 {1, 0, 0, 1},
 {0, 0, 1, 0},
 {0, 0, 0, 0}
 };
 Solution sol;
 sol.booleanMatrix(matrix);
 // Print the modified matrix.
 for (const auto& row : matrix) {
 for (int val : row) {
 cout << val << " ";
 }
 cout << endl;
 }
 return 0;
}
/*Test cases:
1)Input:
matrix[][] = {{ 1, 0, 0},
 { 1, 0, 0},
 { 1, 0, 0},
 { 0, 0, 0}}
Output:
1 1 1
1 1 1
1 1 1
1 0 0
2)Input:
matrix[][] = {{1, 0},
 {0, 0}}
Output:
1 1
1 0
3)Input Matrix:
0 0 0
0 1 0
0 0 0
Output:
0 1 0
1 1 1
0 1 0
*/
