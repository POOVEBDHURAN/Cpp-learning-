/*)Given an unsorted array arr of size n that contains only non negative 
integers, find a sub-array (continuous elements) that has sum equal to 
s. You mainly need to return the left and right indexes(1-based 
indexing) of that subarray.In case of multiple subarrays, return the 
subarray indexes which come first on moving from left to right. If no 
such subarray exists return an array consisting of element -1.*/
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
 vector<int> subarraySum(vector<int>& arr, int n, long long s) {
// your code
 }
};
int main() {
 // Example usage
 vector<int> arr = {1, 2, 3, 7, 5};
 long long target_sum = 12;
 Solution sol;
 vector<int> result = sol.subarraySum(arr, arr.size(), target_sum);
 if (!result.empty()) {
 cout << "Sub-array with sum " << target_sum << ": ";
 for (int val : result) {
 cout << val << " ";
 }
 cout << endl;
 } else {
 cout << "No sub-array found with sum " << target_sum << endl;
 }
 return 0;
}
/*Test Cases
1)Input: arr[] = [1,2,3,7,5], n = 5, s = 12 Output: 2 4
2)Input: arr[] = [1,2,3,4,5,6,7,8,9,10], n = 10, s = 15,Output: 1 5
3)Input: arr[] = [7,2,1], n = 3, s = 2 Output: 2 2
4)Input: arr[] = [5,3,4], n = 3, s = 2 Output: -1*/
