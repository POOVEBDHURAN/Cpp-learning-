/*Write a function maxSubarraySum that takes a vector of integers and returns the maximum sum of a contiguous subarray*/
#include <iostream>
#include <vector>
using namespace std;
int maxSubarraySum(vector<int>& nums) {
int result = 0;
int i,k=0,l=0,n=0,max_sum=0;
result=nums[0];
for(i=0;i<nums.size();i++){
 max_sum+=nums[i];
 if(result<max_sum) result=max_sum;
 if(max_sum<0) max_sum=0;
}
return result;
}
int main() {
vector<int> nums = {5, 4, -1, 7, 8}; // Example input
cout << maxSubarraySum(nums) << endl;
return 0;
}

/* Test Cases:
Input: {-2, 1, -3, 4, -1, 2, 1, -5, 4}
Output: 6
Input: {1}
Output: 1
Input: {5, 4, -1, 7, 8}
Output: 23
Input: {-1, -2, -3, -4}
Output: -1
Input: {-2, -3, 4, -1, -2, 1, 5, -3}
Output: 7
*/
