/*GCD*/
#include <iostream>
class Solution {
public:
 int gcd(int a, int b) {
 int result = 0;
 int temp;
 while(b>0)
 {
 temp=a%b;
 a=b;
 b=temp;
 
 }
 result=a;
 return result;
 }
};
int main() {
 Solution solution;
 int a = 20, b = 16;
 int result = solution.gcd(a, b);
 std::cout << "GCD: " << result << std::endl;
 return 0;

/* Test Cases:
20, 16; // Output: 4
13, 27; // Output: 1
54, 24; // Output: 6 */
