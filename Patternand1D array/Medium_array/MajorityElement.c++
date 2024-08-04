/*Write a function findMajorityElement that takes a vector of integers and returns the majority element. The majority element is the element that appears more than n/2 times*/
#include <iostream>
#include <vector>
using namespace std;
int findMajorityElement(vector<int>& nums) {
int result = -1;
int i,j,count,temp=0;
for(i=0;i<nums.size();i++)
{
 count=0;
 for(j=i;j<nums.size();j++)
 {
 if(nums[i]==nums[j])
 {
 count++;
 }
 }
 if(count>(nums.size()/2) && count>temp){
 result=nums[i];
 temp=count;
 }
}
return result;
}
int main() {
vector<int> nums = {2, 2, 1, 1, 1, 2, 2}; // Example input
cout << findMajorityElement(nums) << endl;
return 0;
}
/*===========================================================*/
   /*Due to time complexity*/
/*===========================================================*/
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int findMajorityElement(vector<int>& nums) {
 int result = -1;
 int i,j,count,temp=0;
 unordered_map<int,int> freq;
 for(i=0;i<nums.size();i++){
 freq[nums[i]]++;
 }
 for(auto k:freq){
 if(k.second>(nums.size()/2)) result=k.first;
 }
 return result;
}
int main() {
vector<int> nums = {2, 2, 1, 1, 1, 2, 2}; // Example input
cout << findMajorityElement(nums) << endl;
return 0;
}

/* Test Cases:
Input: {3, 2, 3}
Output: 3
Input: {2, 2, 1, 1, 1, 2, 2}
Output: 2
Input: {1}
Output: 1
Input: {1, 1, 1, 2, 2}
Output: 1
Input: {6, 5, 5}
Output: 5 */
