/*Unique Elements in the given arrays using do..while loop */
#include <iostream>
#include <vector>
class Solution {
public:
 static std::vector<int> printUniqueElements(int arr[], int n) {
 std::vector<int> result;
 int i=0,j,count;
 do
 {
 j=0;
 count=0;
 do
 {
 if(arr[i]==arr[j]) count++;
 j++;
 }while(j<n);
 if(count==n)
 {
 result.push_back(-1);
 return result;
 }
 if(count==1) result.push_back(arr[i]);
 i++;
 }while(i<n);
 return result;
 }
};
int main() {
 int arr[] = {4, 5, 6, 7, 4, 5, 9, 10, 6};
 int n = sizeof(arr) / sizeof(arr[0]);
 std::vector<int> result = Solution::printUniqueElements(arr, n);
 std::cout << "Unique elements: ";
 for (int elem : result) {
 std::cout << elem << " ";
 }
 std::cout << std::endl;
 return 0;
}

/* Test Cases:
Input: arr = {4, 5, 6, 7, 4, 5, 9, 10, 6} | Output: 7 9 10
Input: arr = {1, 2, 3, 1, 2, 3, 4, 5} | Output: 4 5
Input: arr = {8, 8, 8, 8} | Output: -1
Input: arr = {11, 13, 15, 17} | Output: 11 13 15 17 */
