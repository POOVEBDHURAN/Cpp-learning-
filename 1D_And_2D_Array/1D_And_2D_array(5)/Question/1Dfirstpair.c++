/*Given a sorted 1D array of integers, find a pair of elements that 
sum up to a given target.*/
#include <iostream>
using namespace std;
class Solution {
public:
 pair<int, int> findPairWithSum(int arr[], int n, int target) {
 pair<int, int> result;
 // Implement the logic here
 return result;
 }
};
int main() {
 Solution sol;
 int arr[] = {1, 2, 3, 4, 6};
 int n = 5;
 int target = 6;
 pair<int, int> result = sol.findPairWithSum(arr, n, target);
 cout << "Pair with given sum: (" << result.first << ", " << result.second << ")" << endl;
 return 0;
}
/*Test Cases
1)Input: arr = [1, 2, 4, 5, 7, 11, 15], target = 9
Expected Output: Pair = (2, 7)
2)Input: arr = [1, 2, 3, 5, 8, 12, 15, 18], target = 20
Expected Output: Pair = (5, 15)
3)Input: arr = [1, 3, 5, 7, 9, 11, 13, 15, 17, 19], target = 16
Expected Output: Pair = (3, 13)
4)Input: arr = [2, 4, 6, 8, 10, 12, 14], target = 1*/
