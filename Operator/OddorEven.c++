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

/* Test Cases:
Range 27 to 48
Odd numbers: 27 29 31 33 35 37 39 41 43 45 47
Even numbers: 28 30 32 34 36 38 40 42 44 46 48
Range 5 to 15
Odd numbers: 5 7 9 11 13 15
Even numbers: 6 8 10 12 14
Range 0 to 10
Odd numbers: 1 3 5 7 9
Even numbers: 0 2 4 6 8 10 */
