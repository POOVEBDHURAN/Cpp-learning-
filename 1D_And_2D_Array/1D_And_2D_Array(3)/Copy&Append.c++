/* You are given an array of integers. Your task is to copy the first 
half of the array (from index 0 to n/2 - 1 where n is the length of the 
array) and append it to the end of the same array. If the length of 
the array is odd, include the middle element in the copied section. 
Write a function that returns the modified array. */

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
vector<int> copyAndAppendHalf(const vector<int>& arr) {
vector<int> result;
int i,j;
(arr.size()%2==0)? j=arr.size()/2 : j=(arr.size()/2)+1;
for(i=0;i<arr.size();i++) result.push_back(arr[i]);
for(i=0;i<j;i++){
 result.push_back(arr[i]);
}
return result;
}
};
int main() {
Solution sol;
vector<int> arr = {1, 2, 3, 4, 5, 6};
vector<int> result = sol.copyAndAppendHalf(arr);
cout << "Modified array: ";
for (int num : result) {
cout << num << " ";
}
cout << endl;
return 0;
}

/*Test Cases
arr = {1, 2, 3, 4, 5, 6} -> result = {1, 2, 3, 4, 5, 6, 1, 2, 3}
arr = {7, 8, 9, 10, 11} -> result = {7, 8, 9, 10, 11, 7, 8, 9} 
arr = {42} -> result = {42, 42}
arr = {5, 5, 5, 5} -> result = {5, 5, 5, 5, 5, 5}
arr = {10, 20, 30, 40, 50, 60, 70, 80} -> result = {10, 20, 30, 40, 50, 60, 70, 80, 10, 20, 30, 40} */
