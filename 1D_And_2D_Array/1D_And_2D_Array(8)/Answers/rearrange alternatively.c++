/*)Given a sorted array of positive integers. Your task is to rearrange 
the array elements alternatively i.e first element should be max value, 
second should be min value, third should be second max, fourth 
should be second min and so on.*/
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
 void rearrange(long long *arr, int n) {
 vector<long long> result(n);
 int start = 0, end = n - 1;
 for (int i = 0; i < n; ++i) {
 if (i % 2 == 0) {
 result[i] = arr[end--];
 } else {
 result[i] = arr[start++];
 }
 }
 for (int i = 0; i < n; ++i) {
 arr[i] = result[i];
 }
 }
};
int main() {
 long long arr[] = {1, 2, 3, 4, 5, 6};
 int n = sizeof(arr) / sizeof(arr[0]);
 Solution sol;
 sol.rearrange(arr, n);
 cout << "Rearranged array: ";
 for (int i = 0; i < n; ++i) {
 cout << arr[i] << " ";
 }
 cout << endl;
 return 0;
}
/*Test cases:
1)Input:
n = 6
arr[] = {1,2,3,4,5,6}
Output: 6 1 5 2 4 3
2)Input:
n = 11
arr[]={10,20,30,40,50,60,70,80,90,100,110}
Output:110 10 100 20 90 30 80 40 70 50 60*/
