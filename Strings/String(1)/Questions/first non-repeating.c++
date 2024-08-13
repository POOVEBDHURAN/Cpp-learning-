/*) You are tasked with developing a feature for a text editor that highlights the first 
non-repeating character in a given string. This feature is essential for linguistic analysis 
and for improving user experience by identifying unique characters in texts.
Problem Statement:
Write a function firstNonRepeatingChar that takes a string str and returns the first nonrepeating character. If there is no such character, return an empty character ''.*/
#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
 char firstNonRepeatingChar(string str) {
 char result;
 // Implement the function logic here
 return result;
 }
};
int main() {
 Solution solution;
 string str = "swiss";
 char result = solution.firstNonRepeatingChar(str);
 cout << "First Non-Repeating Character: " << result << endl;
 return 0;
}
/*Test Cases:
1. Input: "swiss"
Expected Output: 'w'
2. Input: "hello"
Expected Output: 'h'
3. Input: "aabbcc"
Expected Output: ''
4. Input: "programming"
Expected Output: 'p'*/
