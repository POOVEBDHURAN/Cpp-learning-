/*Binary to Decimal*/
#include<iostream>
#include<cmath>
using namespace std;
class Solution {
public:
static int binaryToDecimal(const std::string& binary) {
int result = 0,i,j=0;
for(i=binary.length()-1;i>=0;i--)
{
 if(binary[i]=='1') result+=1*pow(2,j++);
 else result+=0*pow(2,j++);
}
return result;
}
};
int main() {
std::string binary = "1101";
int result = Solution::binaryToDecimal(binary);
std::cout << "Decimal: " << result << std::endl;
return 0;
}

/* Test Cases:
Input: binary = "1101" | Output: 13
Input: binary = "1010" | Output: 10
Input: binary = "1111" | Output: 15 */
