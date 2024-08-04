/*Given a square 2D matrix of integers, write a function that 
returns the sum of its main diagonal and secondary diagonal 
elements.*/
#include <bits/stdc++.h>
using namespace std;
int sumDiagonals(vector<vector<int>>& matrix)
{
 int sum=0;
 int i,j;
 int n=matrix[0].size();
 if(matrix.size()==1) return sum=matrix[0][0];
 else{
 for(i=0;i<matrix.size();i++){
 for(j=0;j<matrix[0].size();j++){
 if(i==j) sum+=matrix[i][j];
 if(j==n-i-1) sum+=matrix[i][j];
 }
 }
 }
 return sum;
}
int main() {
vector<vector<int>> matrix = {{5}} ;
int result = sumDiagonals(matrix);
cout << "Sum of the diagonals: " << result << endl;
return 0;
}
