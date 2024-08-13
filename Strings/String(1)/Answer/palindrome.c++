/*You are working on a language processing tool that needs to identify palindromes in 
user inputs. Palindromes are words or phrases that read the same backward as 
forward, and this feature is essential for various linguistic and cryptographic 
applications.
Problem Statement:
Write a function isPalindrome that takes a string str and returns true if the string is a 
palindrome, otherwise returns false.*/
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool isPalindrome(string str) {
        int start = 0, end = str.length() - 1;
        while (start < end) {
            if (str[start] != str[end]) return false;
            start++;
            end--;
        }
        return true;
    }
};

int main() {
    Solution solution;

    string str = "madam";
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
