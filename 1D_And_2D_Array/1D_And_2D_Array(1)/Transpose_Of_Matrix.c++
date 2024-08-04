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
return 0;
}
