/*Given two matrices of the same dimensions, count the number of 
pairs (a, b) where a is from the first matrix and b is from the second 
matrix, such that their sum equals a given target.*/
#include <iostream>
using namespace std;
class Solution {
public:
 int countPairsWithSum(int matrix1[][3], int matrix2[][3], int rows, int cols, int target) {
 int result;
 // Implement the logic here
 return result;
 }
};
int main() {
 Solution sol;
 int matrix1[3][3] = {
 {1, 2, 3},
 {4, 5, 6},
 {7, 8, 9}
 };
 int matrix2[3][3] = {
 {9, 8, 7},
 {6, 5, 4},
 {3, 2, 1}
 };
 int target = 10;
 int result = sol.countPairsWithSum(matrix1, matrix2, 3, 3, target);
 cout << "Number of pairs with sum " << target << ": " << result << endl;
 return 0;
}
/*Test Cases
1)Input:
matrix1 = [[1, 3, 5], [7, 9, 11], [13, 15, 17]]
matrix2 = [[17, 15, 13], [11, 9, 7], [5, 3, 1]]
target = 18
Expected Output: 9
Explanation: Each element from matrix1 can pair with a corresponding element from matrix2 to 
achieve the target sum of 18.
2)Input:
matrix1 = [[10, 20, 30], [40, 50, 60], [70, 80, 90]]
matrix2 = [[90, 80, 70], [60, 50, 40], [30, 20, 10]]
target = 100
Expected Output: 9
Explanation: The pairs are (10, 90), (20, 80), and (30, 70).
3)Input:
matrix1 = [[2, 4, 6], [8, 10, 12], [14, 16, 18]]
matrix2 = [[18, 16, 14], [12, 10, 8], [6, 4, 2]]
target = 20
Expected Output: 9
Explanation: The pairs are (2, 18), (4, 16), (6, 14), (8, 12), (10, 10), and (12, 8).
4)Input:
matrix1 = [[5, 10, 15], [20, 25, 30], [35, 40, 45]]
matrix2 = [[45, 40, 35], [30, 25, 20], [15, 10, 5]]
target = 50
Expected Output: 9
Explanation: The pairs are (5, 45), (10, 40), (15, 35), and (20, 30).
5)Input:
matrix1 = [[1, 4, 7], [10, 13, 16], [19, 22, 25]]
matrix2 = [[25, 22, 19], [16, 13, 10], [7, 4, 1]]
target = 26
Expected Output: 9
Explanation: The pairs are (1, 25), (4, 22), (7, 19), (10, 16), and (13, 13).*/
