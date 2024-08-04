/*Armstrong Number*/
#include<iostream>
#include<cmath>
using namespace std;
class Solution {
public:
static bool isArmstrong(int n) {
bool result = false;
int temp=0,count=0,sum=0;
temp=n;
while(temp>0)
{
 count++;
 temp/=10;
}
temp=n;
while(n>0){
 sum+=pow(n%10,count);
 n/=10;
}
if(sum==temp) result=true;
return result;
}
};
int main() {
int n = 153;
bool result = Solution::isArmstrong(n);
std::cout << "Is Armstrong: " << (result ? "Yes" : "No") << 
std::endl;
return 0;
}
