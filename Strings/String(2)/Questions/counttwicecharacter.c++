/*In a system that monitors the frequency of characters in strings, you need to count 
how many characters appear exactly twice. This feature is useful in analyzing text 
patterns or detecting specific conditions in data.
Problem Statement:
Write a function twiceCounter that takes a string str and returns the count of characters that 
appear exactly twice.*/
#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
 int twiceCounter(string str) {
 int result;
 // Implement the function logic here
 return result;
 }
};
int main() {
 Solution solution;
 string str = "abacbc";
 int result = solution.twiceCounter(str);
 cout << "Number of characters appearing twice: " << result << endl;
 return 0;
}
/*Test Cases:
1. Input: "abacbc"
Expected Output: 2 (Characters 'a' and 'b' appear twice)
2. Input: "aabbcc"
Expected Output: 3
3. Input: "hello"
Expected Output: 1
4. Input: "abcdef"
Expected Output: 0*/
