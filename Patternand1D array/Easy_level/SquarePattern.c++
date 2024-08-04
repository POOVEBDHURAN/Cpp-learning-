/*Print a Square Pattern of Stars*/
#include <iostream>
class Solution {
public:
 static void printSquarePattern(int n) {
 int i,j;
 for(int i=0;i<n;i++,printf("\n")){
 for(j=0;j<n;j++) std::cout<<" * ";
 }
 }
};
int main() {
 int n = 4; // Example input
 Solution::printSquarePattern(n);
 return 0;
}

/*Test Cases:
Input: n = 3
Output:
***
***
***
Input: n = 5
Output:
*****
*****
*****
*****
*****
*/
