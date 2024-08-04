/*Reverse the number using do..while loop*/
#include <iostream>
#include <vector>
class Solution {
public:
 static std::vector<int> reverseNumber(int n) {
 std::vector<int> result;
 int reversed = 0;
 do
 {
 reversed=reversed*10+(n%10);
 n/=10;
 }
 result.push_back(reversed);
 return result;
 }while(n>0);
};
int main() {
 int n = 1234;
 std::vector<int> result = Solution::reverseNumber(n);
 std::cout << "Reversed number: " << result[0] << std::endl;
 return 0;
}
