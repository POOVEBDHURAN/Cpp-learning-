/*Reverse a 1D Array*/
#include <iostream>
#include <vector>
class Solution {
public:
 static std::vector<int> reverseArray(int arr[], int size) {
 std::vector<int> reversedArray; // Default value
 for(int i=size-1;i>=0;i--){
 reversedArray.push_back(arr[i]);
 }
 return reversedArray;
 }
};
int main() {
 int arr[] = {1, 2, 3, 4, 5}; // Example array
 int size = sizeof(arr) / sizeof(arr[0]);
 std::vector<int> reversedArray = Solution::reverseArray(arr, 
size);
 std::cout << "Reversed Array: ";
 for (int num : reversedArray) {
 std::cout << num << " ";
 }
 std::cout << std::endl;
 return 0;
}

/* Test Cases:
Input: arr = {1, 2, 3, 4, 5}//Output: {5, 4, 3, 2, 1}
Input: arr = {10, 20, 30, 40, 50} //Output: {50, 40, 30, 20, 10}
*/
