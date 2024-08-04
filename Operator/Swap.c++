/*Swap two numbers*/
#include <iostream>
class Solution {
public:
 void swapNumbers(int &a, int &b) {
 a=a^b;
 b=a^b;
 a=a^b;
 }
};
int main() {
 Solution solution;
 int a = 5, b = 3;
 solution.swapNumbers(a, b);
 std::cout << "Swapped values: a = " << a << ", b = " << b << 
std::endl;
 return 0;
}

/* Test Cases:
int a = 5, b = 10; // Output: 10 5
int a = 1, b = 2; //Output: 2 1
int a = 0, b = 0; // Output: 0 0 */
