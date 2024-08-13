/*)You are building a word game that requires checking if two given strings are 
anagrams of each other. Anagrams are words or phrases formed by rearranging the 
letters of another, and this check is crucial for game validation.
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
4. Input: "rat", "car"
Expected Output: false
*/
