/*Write a function productExceptSelf that takes a vector of integers 
and returns a vector such that each element at index i of the output 
array is equal to the product of all the elements of the input array 
except nums[i].*/
#include <iostream>
#include <vector>
using namespace std;
vector<int> productExceptSelf(vector<int>& nums) {
vector<int> result(nums.size(), 1);
int i,sum=1;
for(i=0;i<nums.size();i++){
 sum*=nums[i];
}
for(i=0;i<nums.size();i++){
 result[i]=sum/nums[i];
}
return result;
}
int main() {
vector<int> nums = {1,2,3,4}; // Example input
vector<int> result = productExceptSelf(nums);
for (int val : result) {
cout << val << " ";
}
cout << endl;
return 0;
}

/*Test Cases:
Input: {1, 2, 3, 4}
Output: {24, 12, 8, 6}
Input: {5, 6}
Output: {6, 5}
Input: {2, 3, 4, 5}
Output: {60, 40, 30, 24}
Input: {1, 1, 1, 1}
Output: {1, 1, 1, 1}
Input: {0, 0}
Output: {0, 0} */
