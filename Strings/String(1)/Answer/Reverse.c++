/* You are building a text editor and need a feature that allows users to reverse a string 
input. This feature can be useful in various applications, such as decoding messages or 
creating word puzzles.
Problem Statement:
Write a function reverseString that takes a string str and returns the reversed string.*/
) #include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    string reverseString(string str) {
        reverse(str.begin(), str.end());
        return str;
    }
};

int main() {
    Solution solution;

    string str = "hello";
    string result = solution.reverseString(str);
    cout << "Reversed String: " << result << endl;

    return 0;
}

/*Test Cases:
1. Input: "hello"
Expected Output: "olleh"
2. Input: "abcd"
Expected Output: "dcba"
3. Input: "racecar"
Expected Output: "racecar"
4. Input: "12345"
Expected Output: "54321"*/
