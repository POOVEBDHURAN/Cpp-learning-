/* You are given an array of integers and a value k. Write a function to find and return the kth smallest element in the array. */
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
int kthSmallestElement(vector<int>& arr, int k) {
int i,j=1,result;
set<int>s;
for(i=0;i<arr.size();i++)
 s.insert(arr[i]);
 
for(auto& it:s)
{
 if(j==k) result=it;
 j++;
}
return result;
}
};
int main() {
Solution sol;
vector<int> arr = {7, 10, 4, 3, 20, 15};
int result = sol.kthSmallestElement(arr, 3);
cout << "3rd smallest element: " << result << endl;
return 0;
}

/* Test Cases:
arr = {7, 10, 4, 3, 20, 15}, k = 3 -> 7
arr = {1, 2, 3, 4, 5}, k = 2 -> 2
arr = {10, 9, 8, 7, 6}, k = 5 -> 10
arr = {5, 5, 5, 5, 5}, k = 3 -> 5	
arr = {3, 3, 2, 1}, k = 1 -> 1 */
