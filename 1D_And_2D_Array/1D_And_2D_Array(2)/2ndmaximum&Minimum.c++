/* You are given an array of integers. Write a function to find the second largest and the minimum element in the array. */
#include <bits/stdc++.h>
#include<vector>
using namespace std;
class Solution {
public:
pair<int, int> findSecondLargestAndMinElement(const vector<int>& arr) {
pair<int, int> result;
int i,j=0;
int min=INT_MAX,max=INT_MIN;
for(i=0;i<arr.size();i++)
{
 if(min>arr[i]) min=arr[i];
 if(max<arr[i]) max=arr[i];
}
for(i=0;i<arr.size();i++){
 if(max > arr[i] && j <= arr[i]) j=arr[i];
}
result.first=j;
result.second=min;
return result;
}
};
int main() {
Solution sol;
vector<int> arr = {7, 10, 4, 3, 20, 15} ;
pair<int, int> result = sol.findSecondLargestAndMinElement(arr);
cout << "Second largest: " << result.first << ", Minimum: " << result.second << endl;
return 0;
}

/*Test Cases
arr = {7, 10, 4, 3, 20, 15} -> Second largest: 15, Minimum: 3
arr = {1, 2, 3, 4, 5} -> Second largest: 4, Minimum: 1
arr = {5, 5, 5, 5} -> Second largest: -1 (or undefined), Minimum: 5
arr = {100, 50, 75} -> Second largest: 75, Minimum: 50
arr = {3, 3, 2, 1} -> Second largest: 2, Minimum: 1 */
