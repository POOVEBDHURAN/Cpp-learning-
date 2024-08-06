/* Given an array of n elements where elements are in the range 
from 1 to n, one number is missing,and one number is repeating. 
Your task is to find the missing and repeating numbers.*/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
 pair<int, int> findMissingAndRepeating(int arr[], int n) {
 pair<int, int> result;
 int i,j,sum=0,sum1=0;
for(i=0;i<n-1;i++){
    for(j=i+1;j<n;j++)
        if(arr[i]==arr[j]) result.second=arr[i];
}
sort(arr,arr+n);
for(i=0;i<n;i++){
    sum1+=arr[i];
    sum+=arr[0];
    arr[0]++;
}
result.first=sum-(sum1-result.second);
 
 return result;
 }
};
int main() {
 Solution sol;
 int arr[] = {7, 3, 4, 5, 5, 6, 1};
int n = 7;
 pair<int, int> result = sol.findMissingAndRepeating(arr, n);
 cout << "Missing number: " << result.first << ", Repeating number: " << result.second << endl;
 return 0;
}
/*Test Cases
1)Input: arr = [1, 2, 2, 4, 5]
Expected Output: Missing = 3, Repeating = 2
2)Input: arr = [7, 3, 4, 5, 5, 6, 1]
Expected Output: Missing = 2, Repeating = 5
3)Input: arr = [10, 9, 8, 6, 7, 5, 4, 3, 2, 2]
Expected Output: Missing = 1, Repeating = 2
4)Input: arr = [11, 13, 15, 12, 14, 11, 16]
Expected Output: Missing = 10, Repeating = 11
5)Input: arr = [1, 2, 3, 4, 5, 6, 6]
Expected Output: Missing = 7, Repeating = 6*/
