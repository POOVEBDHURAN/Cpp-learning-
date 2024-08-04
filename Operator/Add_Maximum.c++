/*Add Maximum of two digits*/
#include <iostream>
#include<climits>
class Solution {
public:
 int maxSum(int a, int b, int c) {
 int result = 0,add=INT_MIN;
 if(add<a+b) add=a+b;
 if(add<b+c) add=b+c;
 if(add<c+a) add=c+a;
 result=add;
 return result;
 }
};
int main() {
 Solution solution;
 int a = 8, b = 7, c = 9;
 int result = solution.maxSum(a, b, c);
 std::cout << "Maximum sum of two numbers: " << result << 
std::endl;
 return 0;
}

/* Test Cases:
8, 7, 9; // Output: 17 (8 + 9)
-1, -2, -3; // Output: -3 (-1 + -2)
5, 5, 5; // Output: 10 (5 + 5) */
