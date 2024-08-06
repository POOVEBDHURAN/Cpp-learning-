/* Given an array of n elements where elements are in the range 
from 1 to n, one number is missing,and one number is repeating. 
Your task is to find the missing and repeating numbers.*/
#include <iostream>
using namespace std;
class Solution {
public:
 pair<int, int> findMissingAndRepeating(int arr[], int n) {
 pair<int, int> result;
 // Implement the logic here
 return result;
 }
};
int main() {
 Solution sol;
 int arr[] = {4, 3, 6, 2, 1, 1};
 int n = 6;
 pair<int, int> result = sol.findMissingAndRepeating(arr, n);
 cout << "Missing number: " << result.first << ", Repeating number: " << result.second << endl;
 return 0;
}
/*Test Cases
1)Input: arr = [1, 2, 2, 4, 5]
Expected Output: Missing = 3, Repeating = 2
2)Input: arr = [7, 3, 4, 5, 5, 6, 1]
Expected Output: Missing = 2, Repeating = 5
3)Input: arr = [10, 9, 8, 6, 7, 5, 4, 3, 2, 2]
Expected Output: Missing = 1, Repeating = 2
4)Input: arr = [11, 13, 15, 12, 14, 11, 16]
Expected Output: Missing = 10, Repeating = 11
5)Input: arr = [1, 2, 3, 4, 5, 6, 6]
Expected Output: Missing = 7, Repeating = 6*/
