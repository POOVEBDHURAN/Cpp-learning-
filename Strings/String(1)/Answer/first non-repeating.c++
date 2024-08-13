/*) You are tasked with developing a feature for a text editor that highlights the first 
non-repeating character in a given string. This feature is essential for linguistic analysis 
and for improving user experience by identifying unique characters in texts.
Problem Statement:
Write a function firstNonRepeatingChar that takes a string str and returns the first nonrepeating character. If there is no such character, return an empty character ''.*/
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    char firstNonRepeatingChar(string str) {
        unordered_map<char, int> charCount;
        for (char c : str) {
            charCount[c]++;
        }
        for (char c : str) {
            if (charCount[c] == 1) return c;
        }
        return -1;
    }
};

int main() {
    Solution solution;

    string str = "geeksforgeeks";
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
