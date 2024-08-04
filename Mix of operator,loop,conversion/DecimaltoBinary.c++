/*Decimal to Binary*/
#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
static std::string decimalToBinary(int decimal) {
std::string result;
while(decimal>0){
 result=((decimal%2)? "1" : "0" )+result;
 decimal/=2;
}
return result;
}
};
int main() {
int decimal = 13;
std::string result = Solution::decimalToBinary(decimal);
std::cout << "Binary: " << result << std::endl;
return 0;
}

/* Test Cases:
Input: decimal = 13 | Output: "1101"
Input: decimal = 10 | Output: "1010"
Input: decimal = 15 | Output: "1111 */
