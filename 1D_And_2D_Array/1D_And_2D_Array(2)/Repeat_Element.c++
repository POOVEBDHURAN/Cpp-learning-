/* You are given an array of integers. Write a function to find all elements that repeat in the array. The function should return a vector containing these repeating elements. 
The order of the elements in the result vector should be the same as their first appearance in the input array. */
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
vector<int> findAllRepeatingElements(const vector<int>& arr) {
vector<int> result;
int i,j,k,count;
for(k=0;k<arr.size();k++){
 j=arr[k];
 count=0;
 for(i=k;i<arr.size();i++){
 if(j==arr[i]) count++;
 if(count>1)
 {
 result.push_back(arr[i]);
 count=0;
 }
 }
}
if(result.size()==0) result.push_back(0);
return result;
}
};
int main() {
Solution sol;
vector<int> arr = {1, 2, 3, 4, 5, 6};
vector<int> result = sol.findAllRepeatingElements(arr);
cout << "Repeating elements: ";
for (int num : result) {
cout << num << " ";
}
cout << endl;
return 0;
}

/*Test Cases:
arr = {4, 5, 6, 7, 4, 8, 9} --->Output: {4}
arr = {1, 2, 3, 4, 5, 1, 2}-->Output: {1, 2}
arr = {10, 20, 10, 30, 20, 40, 50}-->Output: {10, 20}
arr = {5, 6, 7, 5, 8, 9, 6}-->Output: {5, 6}
arr = {1, 2, 3, 4, 5, 6}-->Output: {} (No repeating elements) */
