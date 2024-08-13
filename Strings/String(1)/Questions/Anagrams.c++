/*You are developing a word game where players must identify if two given words are 
anagrams of each other. This check is essential for validating moves and ensuring 
fairness in the game.
Problem Statement:
Write a function areAnagrams that takes two strings str1 and str2 and returns true if they are 
anagrams of each other, otherwise returns false.*/
#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
 bool areAnagrams(string str1, string str2) {
 bool result;
 // Implement the function logic here
 return result;
 }
};
int main() {
 Solution solution;
 string str1 = "listen";
 string str2 = "silent";
 bool result = solution.areAnagrams(str1, str2);
 cout << "Are Anagrams: " << result << endl;
 return 0;
}
/*Test Cases:
1. Input: "listen", "silent"
Expected Output: true
2. Input: "triangle", "integral"
Expected Output: true
3. Input: "apple", "pale"
Expected Output: false
4. Input: "abc", "bca"
Expected Output: true*/
