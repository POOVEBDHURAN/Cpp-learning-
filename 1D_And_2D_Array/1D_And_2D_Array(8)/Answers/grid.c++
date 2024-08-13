/*)Given a N x M grid. Find All possible paths from top left to bottom 
right.From each cell you can either move only to right or down.*/
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
 void findPaths(int i, int j, vector<vector<int>>& grid, vector<int>& path, vector<vector<int>>& 
allPaths) {
 int n = grid.size();
 int m = grid[0].size();
 
 if (i == n - 1 && j == m - 1) {
 path.push_back(grid[i][j]);
 allPaths.push_back(path);
 path.pop_back();
 return;
 }
 
 path.push_back(grid[i][j]);
 
 if (i < n - 1) findPaths(i + 1, j, grid, path, allPaths);
 if (j < m - 1) findPaths(i, j + 1, grid, path, allPaths);
 
 path.pop_back();
 }
 
 vector<vector<int>> findAllPossiblePaths(int n, int m, vector<vector<int>>& grid) {
 vector<vector<int>> allPaths;
 vector<int> path;
 findPaths(0, 0, grid, path, allPaths);
 return allPaths;
 }
};
int main() {
 int n = 3, m = 3;
 vector<vector<int>> grid = {
 {1, 2, 3},
 {4, 5, 6},
 {7, 8, 9}
 };
 Solution sol;
 vector<vector<int>> result = sol.findAllPossiblePaths(n, m, grid);
 cout << "All possible paths:" << endl;
 for (const auto& path : result) {
 for (int val : path) {
 cout << val << " ";
 }
 cout << endl;
 }
 return 0;
}
/*Test cases:
1)Input: 1 2 3
 4 5 6
Output: 1 4 5 6
 1 2 5 6
 1 2 3 6
2)Input: 1 2
 3 4
Output: 1 2 4
 1 3 4*/
