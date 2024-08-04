/*Given a 2D matrix of integers, write a function that returns the 
sum of all its elements.*/
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int sumMatrix(vector<vector<int>>& matrix)
{
int result;
result=0;
int i,j;
for(i=0;i<matrix.size();i++){
 for(j=0;j<matrix[0].size();j++){
 result+=matrix[i][j];
 }
}
return result;
}
int main() {
vector<vector<int>> matrix = {{1, 2}, {3, 4}, {5, 6}} ;
int result = sumMatrix(matrix);
cout << "Sum of matrix elements: " << result << endl;
return 0;
}
/*Test Cases:
matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}} -> result = 45
matrix = {{0, 0}, {0, 0}} -> result = 0
matrix = {{-1, -2}, {-3, -4}} -> result = -10
matrix = {{1}} -> result = 1
matrix = {{1, 2}, {3, 4}, {5, 6}} -> result = 21*/
