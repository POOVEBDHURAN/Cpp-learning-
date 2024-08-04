/*Fibbonocci Series*/
#include <iostream>
#include<vector>
#include<cmath>
using namespace std;
class Solution {
public:
static std::vector<int> generateFibonacci(int n) {
std::vector<int> result;
int i,a=1,b=0,temp=0;
for(i=0;i<n;i++)
{
 result.push_back(temp);
 b=temp;
 temp+=a;
 a=b;
}
return result;
}
};
int main() {
int n = 5;
std::vector<int> result = Solution::generateFibonacci(n);
std::cout << "Fibonacci Series: ";
for (int num : result) {
std::cout << num << " ";
}
std::cout << std::endl;
return 0;
}
