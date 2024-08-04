/*Find the given number is prime if prime means add the digit if not return -1 using do..while loop*/
#include <iostream>
#include <vector>
class Solution {
public:
 static std::vector<int> sumIfPrime(int n) {
 std::vector<int> result;
 int sum = 0,i=2,count=0;
 do
 {
 if(n%i==0) count++;
 i++;
 }while(i<n/2);
 if(count==0)
 {
 do
 {
 sum+=n%10;
 n/=10;
 }while(n>0);
 }
 else sum=-1;
 result.push_back(sum);
 return result;
 }
};
int main() {
 int n = 1231;
 std::vector<int> result = Solution::sumIfPrime(n);
 std::cout << "Result: " << result[0] << std::endl;
 return 0;
}

/* Test Cases:
Input: n = 1231 | Output: 7 (1+2+3+1=7)
Input: n = 1249 | Output: 16 (1+2+4+9=16)
Input: n = 1001 | Output: -1 (not prime)
Input: n = 4567 | Output: 22 (4+5+6+7=22) */
