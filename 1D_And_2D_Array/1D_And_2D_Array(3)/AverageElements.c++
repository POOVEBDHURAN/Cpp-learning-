/* Find the Average of All Elements in a 2D Array
*/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
double findAverage(const vector<vector<int>>& matrix) {
double result = 0.0;
int i,j,sum=0;
for(i=0;i<matrix.size();i++){
 for(j=0;j<matrix[0].size();j++){
 sum+=matrix[i][j];
 }
}
double n=matrix.size()*matrix[0].size();
result=sum/n;
return result;
}
};
int main() {
Solution sol;
vector<vector<int>> matrix = {{10, 12, 15}, {20, 5, 6}, {7, 18, 25}};
double result = sol.findAverage(matrix);
cout << "Average of elements: " << result << endl;
return 0;
}

/* Test Case 1: matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}} -> Result: 5.0
Test Case 2: matrix = {{-1, -3, -2}, {-4, -5, -6}, {-7, -8, -9}} -> Result: -5.0
Test Case 3: matrix = {{10, 12, 15}, {20, 5, 6}, {7, 18, 25}} -> Result: 13.11
Test Case 4: matrix = {{3}} -> Result: 3.0
Test Case 5: matrix = {{1, 1000, 3}, {500, 200, 4}, {9, 8, 7}} -> Result: 192.44 */
