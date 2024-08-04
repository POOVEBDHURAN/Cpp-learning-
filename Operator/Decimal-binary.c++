/*Decimal To Binary*/
#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
 std::string findBinary(int num) {
 std::string result;
 char digit;
 while(num>0){
 digit=num%2;
 result=to_string(digit)+result;
 num/=2;
 }
 
 return result;
 }
};
int main() {
 Solution solution;
 int num = 4;
 std::string result = solution.findBinary(num);
 std::cout << "Binary representation: " << result << std::endl;
 return 0;
}
