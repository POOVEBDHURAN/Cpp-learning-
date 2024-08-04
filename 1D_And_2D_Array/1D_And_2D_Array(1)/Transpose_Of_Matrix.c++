/*Given a 2D matrix of integers, write a function that returns the 
transpose of the matrix. The transpose of a matrix is obtained by 
swapping the rows and columns */
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> transposeMatrix(vector<vector<int>>& 
matrix)
{
 int i,j;
 
vector<vector<int>>output(matrix[0].size(),vector<int>(matrix.siz
e()));
 for(i=0;i<matrix.size();i++){
 for(j=0;j<matrix[i].size();j++){
 output[j][i]=matrix[i][j];
 }
 }
 return output;
}
int main() {
vector<vector<int>> matrix = {{5, 6}, {7, 8}, {9, 10}};
vector<vector<int>> result = transposeMatrix(matrix);
cout << "Transpose of the matrix: " << endl;
for (const auto& row : result) {
for (int val : row) {
cout << val << " ";
}
cout << endl;
}

 /*matrix = {{1, 2, 3}, {4, 5, 6}} -> result = {{1, 4}, {2, 5}, {3, 6}}
matrix = {{1}} -> result = {{1}}
matrix = {{1, 2}, {3, 4}} -> result = {{1, 3}, {2, 4}}
matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}} -> result = {{1, 4, 7}, {2, 5, 8}, {3, 6, 9}}
matrix = {{5, 6}, {7, 8}, {9, 10}} -> result = {{5, 7, 9}, {6, 8, 10}} */
return 0;
}
