/*Find the Sum of Elements in a 1D Array*/
#include <iostream>
class Solution {
public:
 static int sumArray(int arr[], int size) {
 int sum = 0; // Default value
 for(int i=0;i<size;i++){
 sum+=arr[i];
 }
 return sum;
 }
};
int main() {
 int arr[] = {1, 2, 3, 4, 5}; // Example array
 int size = sizeof(arr) / sizeof(arr[0]);
 int sum = Solution::sumArray(arr, size);
 std::cout << "Sum of elements: " << sum << std::endl;
 return 0;
}

/* Test Cases:
Input: arr = {1, 2, 3, 4, 5}//Output: 15
Input: arr = {10, 20, 30, 40, 50} //Output: 150 */
