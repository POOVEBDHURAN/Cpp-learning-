/*Add and Subtract two numbers without using arithemetic operators*/
#include<iostream>
using namespace std;
class Solution {
public:
static int add(int a, int b) {
int result;
a+=b;
return result=a;
}
static int subtract(int a, int b) {
int result;
a-=b;
return result=a;
}
};
int main() {
int a = 15, b = 10;
int addResult = Solution::add(a, b);
int subtractResult = Solution::subtract(a, b);
std::cout << "Addition result: " << addResult << std::endl;
std::cout << "Subtraction result: " << subtractResult << std::endl;
return 0;
}
