/*You are given an integer k and matrix mat. Rotate the elements of 
the given matrix to the left k times and return the resulting matrix.*/
#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> rotateMatrixLeftKTimes(vector<vector<int>>& mat, int k) {
 // Your implementation here
}
int main() {
 // Example usage
 int k = 2;
 vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
 vector<vector<int>> rotatedMatrix = rotateMatrixLeftKTimes(matrix, k);
 // Print rotatedMatrix
 return 0;
}
/*Test cases
1. (k = 2):
Input Matrix:
[[1, 2, 3],
[4, 5, 6],
[7, 8, 9]]
Expected Output:
[[3, 1, 2],
[6, 4, 5],
[9, 7, 8]]
2.(k = 3):
Input Matrix:
[[1, 2, 3],
[4, 5, 6],
[7, 8, 9]]
Expected Output:
[[2, 3, 1],
[5, 6, 4],
[8, 9, 7]]
3.(k = 4):
Input Matrix:
[[1, 2, 3],
[4, 5, 6],
[7, 8, 9]]
Expected Output (No rotation, same as input):
[[1, 2, 3],
[4, 5, 6],
[7, 8, 9]]
4.(k = 1):
Input Matrix:
[[1, 2, 3],
[4, 5, 6],
[7, 8, 9]]
Expected Output:
[[2, 3, 1],
[5, 6, 4],
[8, 9, 7]]
5.(k = 0):
Input Matrix:
[[1, 2, 3],
[4, 5, 6],
[7, 8, 9]]
Expected Output (No rotation, same as input):
[[1, 2, 3],
[4, 5, 6],
[7, 8, 9]]
6. (k = 5):
Input Matrix:
[[1, 2, 3],
[4, 5, 6],
[7, 8, 9]]
Expected Output:
[[3, 1, 2],
[6, 4, 5],
[9, 7, 8]]
7. (k = 7):
Input Matrix:
[[1, 2, 3],
[4, 5, 6],
[7, 8, 9]]
Expected Output:
[[2, 3, 1],
[5, 6, 4],
[8, 9, 7]]
8. (k = 10):
Input Matrix:
[[1, 2, 3],
[4, 5, 6],
[7, 8, 9]]
Expected Output (No rotation, same as input):
[[1, 2, 3],
[4, 5, 6],
[7, 8, 9]]
*/
