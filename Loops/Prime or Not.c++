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
