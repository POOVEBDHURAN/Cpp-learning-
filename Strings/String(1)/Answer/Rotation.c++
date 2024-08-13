/*You are developing a text analysis tool that requires checking if two given strings are 
rotations of each other. This functionality is crucial in various applications, such as 
checking if a word can be transformed into another through rotation, often used in 
cyclic pattern recognition.
Problem Statement:
Write a function areRotations that takes two strings str1 and str2 and returns true if one string is 
a rotation of the other, otherwise returns false.*/
#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool areRotations(string str1, string str2) {
        if (str1.length() != str2.length()) return false;
        string temp = str1 + str1;
        return (temp.find(str2) != string::npos);
    }
};

int main() {
    Solution solution;

    string str1 = "abcd";
    string str2 = "cdab";
    bool result = solution.areRotations(str1, str2);
    cout << "Are Rotations: " << result << endl;

    return 0;
}

/*Test Cases:
1. Input: "abcd", "cdab"
Expected Output: true
2. Input: "hello", "llohe"
Expected Output: true
3. Input: "test", "tset"
Expected Output: false
4. Input: "rotation", "tationro"
Expected Output: true
*/
