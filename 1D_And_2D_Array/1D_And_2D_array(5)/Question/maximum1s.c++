*Given a binary matrix, find the row that has the maximum 
number of 1s.*/
#include <iostream>
using namespace std;
class Solution {
public:
 int rowWithMaxOnes(int matrix[][4], int rows, int cols) {
 int result;
 // Implement the logic here
 return result;
 }
};
int main() {
 Solution sol;
 int matrix[4][4] = {
 {0, 1, 1, 1},
 {1, 1, 1, 1},
 {0, 0, 0, 1},
 {0, 0, 0, 0}
 };
 int result = sol.rowWithMaxOnes(matrix, 4, 4);
 cout << "Row with maximum 1s: " << result << endl;
 return 0;
}
/*Test Cases
1)Input:
matrix = [[0, 1, 1, 1], [1, 1, 1, 1], [0, 0, 0, 1], [1, 1, 1, 0]]
Expected Output: 1 (2nd row)
2)Input:
matrix = [[1, 0, 0, 0], [0, 0, 1, 1], [1, 1, 1, 1], [0, 0, 0, 1]]
Expected Output: 2 (3rd row)
3)Input:
matrix = [[1, 1, 1], [1, 1, 1], [1, 1, 1]]
Expected Output: 0 (1st row)
4)Input:
matrix = [[0, 0, 0, 0], [1, 0, 0, 0], [0, 0, 0, 0], [0, 1, 1, 1]]
Expected Output: 3 (4th row)
5)Input:
matrix = [[0, 0, 0], [0, 0, 0], [1, 0, 1]]
Expected Output: 2 (3rd row)
*/
