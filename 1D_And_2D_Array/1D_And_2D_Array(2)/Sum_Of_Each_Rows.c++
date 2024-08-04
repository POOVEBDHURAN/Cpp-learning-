/* You are given a 2D array representing the scores of students across different subjects. Write a function to calculate and return an array containing the sum of each row. */
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
vector<int> findRowSums(const vector<vector<int>>& matrix) {
vector<int> result;
int i,j,sum;
for(i=0;i<matrix.size();i++){
 sum=0;
 for(j=0;j<matrix[0].size();j++){
 sum+=matrix[i][j];
 }
 result.push_back(sum);
}
return result; }
};
int main() {
Solution sol;
vector<vector<int>> matrix = {
{1, 2, 3},
{4, 5, 6},
{7, 8, 9}
};
vector<int> result = sol.findRowSums(matrix);
cout << "Row sums: ";
for (int sum : result) {
cout << sum << " ";
}
cout << endl;
return 0;
}

/*Test Cases 
matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}} -> Row sums: {6, 15, 24}
matrix = {{1, 1, 1}, {1, 1, 1}} -> Row sums: {3, 3}
matrix = {{2, 2, 2}} -> Row sums: {6}
matrix = {{10, 20}, {30, 40}, {50, 60}} -> Row sums: {30, 70, 110}
matrix = {{5, 5}, {5, 5}, {5, 5}} -> Row sums: {10, 10, 10} */
