/*Odd or Even*/
#include <iostream>
#include <vector>
class Solution {
public:
 void printOddEvenNumbers(int start, int end, std::vector<int>& 
odds, std::vector<int>& evens) {
 int i;
 for(i=start;i<=end;i++)
 {
 if(i%2==0) evens.push_back(i);
 else odds.push_back(i);
 }
 }
};
int main() {
 Solution solution;
 std::vector<int> odds, evens;
 solution.printOddEvenNumbers(27, 48, odds, evens);
 std::cout << "Odd numbers: ";
 for (int num : odds) std::cout << num << " ";
 std::cout << "\nEven numbers: ";
 for (int num : evens) std::cout << num << " ";
 std::cout << std::endl;
 return 0;
}
