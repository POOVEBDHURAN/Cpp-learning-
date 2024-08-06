/*You are given a 2D square matrix and two positions within the 
matrix. Your task is to swap the elements at these two positions and 
return the modified matrix.*/
#include <iostream>
using namespace std;
class Solution {
public:
void swapElements(int matrix[][3], int pos1Row, int pos1Col, int 
pos2Row, int pos2Col, int size) {
 
matrix[pos1Row][pos1Col]=matrix[pos1Row][pos1Col]+matrix[pos
2Row][pos2Col];
 matrix[pos2Row][pos2Col]=matrix[pos1Row][pos1Col]-
matrix[pos2Row][pos2Col];
 matrix[pos1Row][pos1Col]=matrix[pos1Row][pos1Col]-
matrix[pos2Row][pos2Col];
}
};
int main() {
Solution sol;
int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
int size = 3;
int pos1Row = 0, pos1Col = 0; // Position of the first element to swap
int pos2Row = 0, pos2Col = 2; // Position of the second element to 
swap
sol.swapElements(matrix, pos1Row, pos1Col, pos2Row, pos2Col, 
size);
cout << "Matrix after swapping elements: " << endl;
for (int i = 0; i < size; i++) {
for (int j = 0; j < size; j++) {
cout << matrix[i][j] << " ";
}
cout << endl;
}
return 0;
}

/*Test Cases
1) Matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, pos1 = (0, 1), pos2 = (2, 1)
Result: matrix = {{1, 8, 3}, {4, 5, 6}, {7, 2, 9}}
2) Matrix = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}}, pos1 = (0, 0), pos2 = (2, 2)
Result: matrix = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}} (No visible change)
3) Matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, pos1 = (0, 0), pos2 = (0, 2)
Result: matrix = {{3, 2, 1}, {4, 5, 6}, {7, 8, 9}}
4) Matrix = {{1, 2, 3}, {4, 5, 6}, {q7, 8, 9}}, pos1 = (1, 1), pos2 = (2, 1)
Result: matrix = {{1, 2, 3}, {4, 8, 6}, {7, 5, 9}}
5)Matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, pos1 = (0, 1), pos2 = (3, 3)
Result: matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}*/
