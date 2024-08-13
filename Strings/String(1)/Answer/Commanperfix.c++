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
        if (strs.empty()) return "";
        string prefix = strs[0];
        for (int i = 1; i < strs.size(); i++) {
            while (strs[i].find(prefix) != 0) {
                prefix = prefix.substr(0, prefix.size() - 1);
                if (prefix.empty()) return "";
            }
        }
        return prefix;
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
