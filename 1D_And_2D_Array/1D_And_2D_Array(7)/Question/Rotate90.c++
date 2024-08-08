/*)Given a square matrix of size N x N. The task is to rotate it by 90 
degrees in anti-clockwise direction without using any extra space.*/
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
 void rotateby90(vector<vector<int>>& matrix, int n) {
 // Your code here
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
 sol.rotateby90(matrix, matrix.size());
 cout << "Rotated matrix:" << endl;
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
N = 3
matrix[][] = {{1, 2, 3},
 {4, 5, 6}
 {7, 8, 9}}
Output:
Rotated Matrix:
3 6 9
2 5 8
1 4 7
2:Input:
N = 2
matrix[][] = {{1, 2},
 {3, 4}}
Output:
Rotated Matrix:
2 4
1 3*/
