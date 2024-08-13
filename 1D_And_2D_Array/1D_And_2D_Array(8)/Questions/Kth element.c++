/*Given a matrix with n rows and m columns. Your task is to find the kth element which is obtained 
while traversing the matrix spirally. You need to complete the method findK which takes four 
arguments the first argument is the matrix A and the next two arguments will be n and m denoting the 
size of the matrix A and then the forth argument is an integer k. The function will return the kth 
element obtained while traversing the matrix spirally.*/
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
 int findK(vector<vector<int>>& A, int n, int m, int k) {
 //your code
 }
};
int main() {
 // Example usage
 vector<vector<int>> A1 = {
 {1, 2, 3, 4},
 {5, 6, 7, 8},
 {9, 10, 11, 12},
 {13, 14, 15, 16}
 };
 int n1 = 4, m1 = 4, k1 = 10;
 Solution sol;
 cout << "Example 1: " << sol.findK(A1, n1, m1, k1) << endl;
 vector<vector<int>> A2 = {
 {1, 2, 3},
 {4, 5, 6},
 {7, 8, 9}
 };
 int n2 = 3, m2 = 3, k2 = 4;
 cout << "Example 2: " << sol.findK(A2, n2, m2, k2) << endl;
 return 0;
}
/*Test cases
1)Input:
n = 4, m = 4, k = 10
A[][] = {{1 2 3 4},
 {5 6 7 8},
 {9 10 11 12},
 {13 14 15 16}}
Output: 13
2)Input:
n = 3, m = 3, k = 4
A[][] = {{1 2 3},
 {4 5 6},
 {7 8 9}}
Output: 6*/
