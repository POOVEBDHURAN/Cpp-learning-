/*You are working on a language processing tool that needs to identify palindromes in 
user inputs. Palindromes are words or phrases that read the same backward as 
forward, and this feature is essential for various linguistic and cryptographic 
applications.
Problem Statement:
Write a function isPalindrome that takes a string str and returns true if the string is a 
palindrome, otherwise returns false.*/
#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
 bool isPalindrome(string str) {
 bool result;
 // Implement the function logic here
 return result;
 }
};
int main() {
 Solution solution;
 string str = "madonna";
 bool result = solution.isPalindrome(str);
 cout << "Is Palindrome: " << result << endl;
 return 0;
}
/*Test Cases:
1. Input: "madam"
Expected Output: true
2. Input: "racecar"
Expected Output: true
3. Input: "hello"
Expected Output: false
4. Input: "level"
Expected Output: true*/
