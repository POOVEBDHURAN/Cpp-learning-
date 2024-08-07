/*You are given an array of size N. Rearrange the given array in-place 
such that all the negative numbers occur before all non-negative 
numbers.*/
(Maintain the order of all -ve and non-negative numbers as given in the original array).
#include <iostream>
#include <vector>
using namespace std;
void rearrangeNegativesAndNonNegatives(vector<int>& arr) {
 // Your implementation here
}
int main() {
 // Example usage
 vector<int> arr = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
 rearrangeNegativesAndNonNegatives(arr);
 // Print rearranged array
 return 0;
}
/*Test cases:
1.Input:
[-5, -4, -3, -2, -1]
Expected Output:
-5 -4 -3 -2 -1
2.Input:
[0, 1, 2, 3, 4]
Expected Output:
0 1 2 3 4
3.Input:
[-3, 2, -1, 4, -2]
Expected Output:
-3 -2 -1 2 4
4.Input:
[-42]
Expected Output:
-42
5.Input:
[42]
Expected Output:
42
6.Input:
[]
Expected Output: (No output)
7.Input:
[-7, -7, -7, -7]
Expected Output:
-7 -7 -7 -7
8.Input:
[9, 9, 9, 9]
Expected Output:
9 9 9 9
9.Input:
[-2, 3, -1, 4, -5]
Expected Output:
-2 -1 -5 3 4
10.Input:
[1000, -500, 200, -100, 300]
Expected Output:
-500 -100 1000 200 300
*/
