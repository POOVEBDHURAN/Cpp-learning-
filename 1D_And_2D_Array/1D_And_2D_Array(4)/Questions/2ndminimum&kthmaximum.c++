/*You are given an array of integers and an integer k. Your task is to 
find the second minimum and the kth maximum elements in the 
array. Write a function that returns these two elements.*/
#include <iostream>
#include <algorithm>
#include <limits.h> // for iNT_MAX and iNT_MiN
using namespace std;
class Solution {
public:
Pair<int, int> findSecondMinAndKthMax(int arr[], int n, int k) {
Pair<int, int> result;
// implement the logic here
return result;
}
};
int main() {
Solution sol;
int arr[] = {12, 35, 1, 10, 34, 1};
int n = sizeof(arr) / sizeof(arr[0]);
int k = 3; // Kth maximum element to find
Pair<int, int> result = sol.findSecondMinAndKthMax(arr, n, k);
cout << "Second Minimum: " << result.first << endl;
cout << "Kth Maximum: " << result.second << endl;
return 0;
}
/*Test Cases
Arr = {12, 35, 1, 10, 34, 1}, k = 3 -> result = (10, 12)
Arr = {5, 5, 5, 7, 8}, k = 2 -> result = (7, 7)
Arr = {-1, -2, 3, 5, -10, 4}, k = 2 -> result = (-1, 4)
Arr = {10, 20}, k = 1 -> result = (20, 20)
Arr = {1, 2, 3, 4, 5}, k = 6 -> result = (2, iNT_MiN) */
