/*You are implementing a basic data compression algorithm for a file storage system 
that uses run-length encoding (RLE) to compress text. RLE is effective for compressing 
simple data like sequences of repeating characters.
Problem Statement:
Write a function runLengthEncoding that takes a string str and returns the run-length encoded 
version of the string.*/
#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
 string runLengthEncoding(string str) {
 string result;
 // Implement the function logic here
 return result;
 }
};
int main() {
 Solution solution;
 string str = "aaabbcc";
 string result = solution.runLengthEncoding(str);
 cout << "Run-Length Encoded String: " << result << endl;
 return 0;
}
/*Test Cases:
1. Input: "aaabbcc"
Expected Output: "a3b2c2"
2. Input: "abcd"
Expected Output: "a1b1c1d1"
3. Input: "aaaaa"
Expected Output: "a5"
4. Input: "aabcccccaaa"
Expected Output: "a2b1c5a3"*/
