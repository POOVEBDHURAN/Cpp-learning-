/*Given a 2D matrix of integers, write a function that returns the 
maximum element in the matrix.*/
#include<bits/stdc++.h>
using namespace std;
int maxElement(vector<vector<int>>& matrix)
{
 int result;
 result=INT_MIN;
 int i,j;
 for(i=0;i<matrix.size();i++){
 for(j=0;j<matrix[0].size();j++){
 if(result<matrix[i][j]) result=matrix[i][j];
 }
 }
return result;
}
int main() {
vector<vector<int>> matrix = {{-1, -2, -3}, {-4, -5, -6}} ;
int result = maxElement(matrix);
cout << "Maximum element in the matrix: " << result << endl;
return 0;
}

/*Test Cases: 
matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}} -> result = 9
matrix = {{0, -1, -2}, {-3, -4, -5}} -> result = 0
matrix = {{10, 20, 30}, {40, 50, 60}} -> result = 60
matrix = {{-1, -2, -3}, {-4, -5, -6}} -> result = -1
matrix = {{3}} -> result = 3 */
