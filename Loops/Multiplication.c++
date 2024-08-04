/*Multiplication using for loop*/
#include <iostream>
#include <vector>
class Solution {
public:
 static std::vector<int> printMultiplicationTable(int n) {
 std::vector<int> result;
 for(int i=1;i<=10;i++)
 {
 result.push_back(n*i);
 }
 return result;
 }
};
int main() {
 int n = 5;
 std::vector<int> result = Solution::printMultiplicationTable(n);
 std::cout << "Multiplication table of " << n << ":" << std::endl;
 for (int i = 0; i < result.size(); ++i) {
 std::cout << n << " x " << i + 1 << " = " << result[i] << 
std::endl;
 }
 return 0;
}
