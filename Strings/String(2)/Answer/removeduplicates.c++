/*You are working on a data cleanup tool that removes duplicate characters from a 
string. This feature is essential for preparing clean data inputs for various applications, 
such as database entries or text processing.
Problem Statement:
Write a function removeDuplicates that takes a string str and returns the string with all 
duplicate characters removed, retaining only the first occurrence.*/
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

class Solution {
public:
    string removeDuplicates(string str) {
        string result;
        unordered_set<char> seen;
        for (char c : str) {
            if (seen.find(c) == seen.end()) {
                result += c;
                seen.insert(c);
            }
        }
        return result;
    }
};

int main() {
    Solution solution;
    string str = "programming";
    string result = solution.removeDuplicates(str);
    cout << "String without duplicates: " << result << endl;
    return 0;
}

/*Test Cases:
1. Input: "programming"
Expected Output: "progamin"
2. Input: "aabbcc"
Expected Output: "abc"
3. Input: "hello"
Expected Output: "helo"
4. Input: "abcdef"
Expected Output: "abcdef"*/
