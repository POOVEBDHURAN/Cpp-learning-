/*)Given a boolean matrix of size RxC where each cell contains either 0 
or 1, modify it such that if a matrix cell matrix[i][j] is 1 then all the 
cells in its ith row and jth column will become 1.*/
#include<bits/stdc++.h>
using namespace std;

class Solution
{ 
 public:
 void booleanMatrix(vector<vector<int> > &matrix)
 {
   int i,j,k,l;
   int temp[matrix.size()][matrix[0].size()];
   for(i=0;i<matrix.size();i++){
       for(j=0;j<matrix[0].size();j++){
           temp[i][j]=matrix[i][j];
       }
   }
   for(i=0;i<(sizeof(temp)/sizeof(temp[0]));i++){
       for(j=0;j<(sizeof(temp[0])/sizeof(temp[0][0]));j++){
           if(temp[i][j]==1){
               for(k=0;k<matrix.size();k++){ 
                    matrix[k][j]=1;}
               for(l=0;l<matrix[0].size();l++){
                    matrix[i][l]=1;}
           }
       }
   }
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
