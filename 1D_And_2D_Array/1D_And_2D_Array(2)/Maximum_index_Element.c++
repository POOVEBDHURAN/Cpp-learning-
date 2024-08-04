/* You are given an array of integers. Write a function to find the index of the maximum element in the array. */
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
int findMaxElementIndex(const vector<int>& arr) {
int result;
int i,j=INT_MIN;
for(i=0;i<arr.size();i++){
 if(j<arr[i]){
 j=arr[i];
 result=i;}
}
return result;
}
};
int main() {
Solution sol;
vector<int> arr = {7, 10, 4, 20, 15};
int result = sol.findMaxElementIndex(arr);
cout << "Index of the maximum element: " << result << endl;
return 0;
}

/*Test Cases 
arr = {7, 10, 4, 20, 15} -> Index: 3
arr = {1, 2, 3, 4, 5} -> Index: 4
arr = {10, 10, 10} -> Index: 0
arr = {100, 50, 75} -> Index: 0
arr = {3, 1, 2} -> Index: 0 */
