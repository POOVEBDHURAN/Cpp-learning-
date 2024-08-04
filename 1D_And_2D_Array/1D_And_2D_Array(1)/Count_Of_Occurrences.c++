/*Given a 2D matrix of integers and an integer target, write a
function that returns the count of occurrences of the target element 
in the matrix.*/
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int countElement(vector<vector<int>>& matrix, int target)
{
 int result;
 result=0;
 int i,j;
 for(i=0;i<matrix.size();i++){
 for(j=0;j<matrix[0].size();j++){
 if(target==matrix[i][j]) result++;
 }
 }
 return result;
}
int main() {
vector<vector<int>> matrix = {{1, 1, 1}, {1, 1, 1}};
int target = 1;
int result = countElement(matrix, target);
cout << "Count of target element: " << result << endl;
return 0;
}

/*Test Cases: 
matrix = {{1, 2, 2}, {3, 4, 2}, {5, 2, 6}}, target = 2 -> result = 4
matrix = {{1, 1, 1}, {1, 1, 1}}, target = 1 -> result = 6
matrix = {{0, 0, 0}, {0, 0, 0}}, target = 0 -> result = 6
matrix = {{1, 2, 3}}, target = 2 -> result = 1
matrix = {{4, 5, 6}, {7, 8, 9}}, target = 10 -> result = 0 */
