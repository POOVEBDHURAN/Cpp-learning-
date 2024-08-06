/*You are given a 2D matrix. Your task is to check if the sum of all 
rows is equal to the sum of all columns. Write a function that 
returns a boolean value indicating whether the sums are equal.*/
#include <iostream>
using namespace std;
class Solution {
public:
bool areRowAndColumnSumsEqual(int matrix[][3], int rows, int cols) {
bool result;
// implement the logic here
return result;
}
};
int main() {
Solution sol;
int matrix[3][3] = {
{1, 2, 3},
{4, 5, 6},
{7, 8, 9}
};
int rows = 3;
int cols = 3;
bool result = sol.areRowAndColumnSumsEqual(matrix, rows, cols);
if(result) {
cout << "The sum of all rows is equal to the sum of all columns.” << endl;
} else {
cout << "The sum of all rows is not equal to the sum of all columns.” << endl;
}
return 0;
}
/*Test Cases
Matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}} -> result = true
Matrix = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}} -> result = true
Matrix = {{1, 2, 3}, {4, 5, 1}, {7, 1, 2}} -> result = false
Matrix = {{1, 2, 3}, {4, 5, 1}, {7, 1, 3}} -> result = false
Matrix = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}} -> result = true*/
