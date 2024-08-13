/* You are developing a text processing tool that requires removing all spaces from a 
given string. This is essential in formatting text for certain applications, such as 
preparing input for code compilation or data entry fields.
Problem Statement:
Write a function removeSpaces that takes a string str and returns the string with all spaces 
removed.*/
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string removeSpaces(string str) {
        string result;
        for (char c : str) {
            if (c != ' ') {
                result += c;
            }
        }
        return result;
    }
};

int main() {
    Solution solution;
    string str = "This is a test";
    string result = solution.removeSpaces(str);
    cout << "String without spaces: " << result << endl;
    return 0;
}

/*Test Cases:
1. Input: "Hello World"
Expected Output: "HelloWorld"
2. Input: " Remove spaces "
Expected Output: "Removespaces"
3. Input: "NoSpaces"
Expected Output: "NoSpaces"
4. Input: " " Expected Output: ""*/
