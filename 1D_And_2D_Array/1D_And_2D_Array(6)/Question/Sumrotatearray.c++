/*)Given an integer array(0-based indexing) a of size n. Your task is to 
return the maximum value of the sum of i*a[i] for all 0<= i <=n-1, 
where a[i] is the element at index i in the array. The only operation 
allowed is to rotate(clockwise or counterclockwise) the array any 
number of times.*/
#include <iostream>
#include <vector>
using namespace std;
int maxSumRotatedArray(vector<int>& a) {
 // Your implementation here
}
int main() {
 // Example usage
 vector<int> arr = {8, 3, 1, 2};
 int maxSum = maxSumRotatedArray(arr);
 cout << "Maximum sum of i*a[i]: " << maxSum << endl;
 return 0;
}
/*Test cases
1.Input: n = 4, a[] = {8, 3, 1, 2}
Expected Output: 29
Explanation: All the configurations possible by rotating the elements are:
3 1 2 8 here sum is 3*0+1*1+2*2+8*3 = 29
1 2 8 3 here sum is 1*0+2*1+8*2+3*3 = 27
2 8 3 1 here sum is 2*0+8*1+3*2+1*3 = 17
8 3 1 2 here sum is 8*0+3*1+1*2+2*3 = 11, so the maximum sum will be 29.
2.Input: [] Expected Output: 0
3.Input: [42] Expected Output: 0
4.Input: [1, 2, 3, 4, 5] Expected Output: 40
5.Input: [-5, -4, -3, -2, -1] Expected Output: 40
6.Input: [-3, 2, -1, 4, -2] Expected Output: 20
7.Input: [3, 1, 2] Expected Output: 29
8.Input: [2, 3, 1] Expected Output: 4
9.Input: [4, 5, 6, 1, 2, 3] Expected Output: 40
10.Input: [-2, -1, 4, 5, 6, -3] Expected Output: 40 */
