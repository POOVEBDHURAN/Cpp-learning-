/*In a database search system, you need to find the longest common prefix among a set 
of strings. This is useful for optimizing search algorithms and improving query 
efficiency.
Problem Statement:
Write a function longestCommonPrefix that takes an array of strings strs and returns the 
longest common prefix. If there is no common prefix, return an empty string "".*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
 string longestCommonPrefix(vector<string>& strs) {
 string result;
 // Implement the function logic here
 return result;
 }
};
int main() {
 Solution solution;
 vector<string> strs = {"flower", "flow", "flight"};
 string result = solution.longestCommonPrefix(strs);
 cout << "Longest Common Prefix: " << result << endl;
 return 0;
}
/*Test Cases:
1. Input: ["flower", "flow", "flight"]
Expected Output: "fl"
2. Input: ["dog", "racecar", "car"]
Expected Output: ""
3. Input: ["interspecies", "interstellar", "interstate"]
Expected Output: "inters"
4. Input: ["a", "a", "a"]
Expected Output: "a"*/
