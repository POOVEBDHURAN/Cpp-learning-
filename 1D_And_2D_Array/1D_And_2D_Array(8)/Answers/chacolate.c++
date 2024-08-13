/*Given an array A[ ] of positive integers of size N, where each value 
represents the number of chocolates in a packet. Each packet can have 
a variable number of chocolates. There are M students, the task is to 
distribute chocolate packets among M students such that :
1. Each student gets exactly one packet.
2. The difference between maximum number of chocolates given to a 
student and minimum number of chocolates given to a student is 
minimum.*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
 long long findMinDiff(vector<long long>& a, long long n, long long m) {
 if (m > n) return -1;
 sort(a.begin(), a.end());
 long long minDiff = LLONG_MAX;
 for (long long i = 0; i + m - 1 < n; ++i) {
 minDiff = min(minDiff, a[i + m - 1] - a[i]);
 }
 return minDiff;
 }
};
int main() {
 vector<long long> a = {3, 1, 4, 9, 6, 7};
 long long n = a.size();
 long long m = 3;
 Solution sol;
 cout << "Minimum difference: " << sol.findMinDiff(a, n, m) << endl;
 return 0;
}
/*Test Cases:
1)Input:
N = 8, M = 5
A = {3, 4, 1, 9, 56, 7, 9, 12}
Output: 6
2:Input:
N = 7, M = 3
A = {7, 3, 2, 4, 9, 12, 56}
Output: 2*/
