/*Given a matrix of size N x N. Print the elements of the matrix in the 
snake pattern*/
#include <iostream>
#include <vector>
using namespace std;
void printMatrixSnakePattern(vector<vector<int>>& mat) {
 // Your implementation here
}
int main() {
 // Example usage
 vector<vector<int>> matrix = {{10, 20, 30, 40}, {15, 25, 35, 45}, {27, 29, 37, 48}, {32, 33, 39, 
50}};
 printMatrixSnakePattern(matrix);
 return 0;
}
/*Test Cases:
1 (3x3 Matrix):
Input Matrix:
[[1, 2, 3],
[4, 5, 6],
[7, 8, 9]]
Expected Output:
1 2 3 6 5 4 7 8 9
2 (4x4 Matrix):
Input Matrix:
[[10, 20, 30, 40],
[15, 25, 35, 45],
[27, 29, 37, 48],
[32, 33, 39, 50]]
Expected Output:
10 20 30 40 45 35 25 15 27 29 37 48 50 39 33 32
3 (5x5 Matrix):
Input Matrix:
[[1, 2, 3, 4, 5],
[6, 7, 8, 9, 10],
[11, 12, 13, 14, 15],
[16, 17, 18, 19, 20],
[21, 22, 23, 24, 25]]
Expected Output:
1 2 3 4 5 10 9 8 7 6 11 12 13 14 15 20 19 18 17 16 21 22 23 24 25
4 (2x6 Matrix):
Input Matrix:
[[1, 2, 3, 4, 5, 6],
[7, 8, 9, 10, 11, 12]]
Expected Output:
1 2 3 4 5 6 12 11 10 9 8 7
5 (3x2 Matrix):
Input Matrix:
[[1, 2],
[3, 4],
[5, 6]]
Expected Output:
1 2 4 3 5 6
6 (1x1 Matrix):
Input Matrix:
[[42]]
Expected Output:
42
*/
