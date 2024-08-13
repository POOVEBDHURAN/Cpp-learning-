/*Given a two-dimensional integer array arr of dimensions n x n, consisting solely of zeros and ones, 
identify the row or column (using 0-based indexing) where all elements form a palindrome. If multiple 
palindromes are identified, prioritize the palindromes found in rows over those in columns. Within 
rows or columns, the palindrome with the smaller index takes precedence. The result should be 
represented by the index followed by either 'R' or 'C', indicating whether the palindrome was located 
in a row or column. The output should be space-separated. If no palindrome is found, return the string 
-1.*/
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
 string pattern(vector<vector<int>>& arr) {
 //your code
 }
};
int main() {
 // Example usage
 vector<vector<int>> arr = {
 {1, 0, 1},
 {0, 1, 0},
 {1, 0, 1}
 };
 Solution sol;
 cout << "Result: " << sol.pattern(arr) << endl;
 return 0;
}
/*Test cases:
1)Input:
arr[][] = [[1, 0, 0],
 [0, 1, 0],
 [1, 1, 0]]
Output: 1 R
2)Input:
arr[][] = [[1, 0],
 [1, 0]]
Output: 0 C*/
