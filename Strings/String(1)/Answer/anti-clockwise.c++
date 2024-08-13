/*.Imagine you are working on a text-processing system where certain encryption 
mechanisms involve rotating strings by a fixed number of places. For security checks, 
you need to verify if a given string can be derived by rotating another string exactly 2 
places in an anti-clockwise direction. Your task is to implement a function that 
performs this check.
Problem Statement:
You are given two strings, str1 and str2. Write a function isRotatedBy2Places that checks 
whether str2 can be obtained by rotating str1 exactly 2 places in an anti-clockwise direction. 
Return true if it is possible, otherwise return false.*/
#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool isRotatedBy2PlacesAntiClockwise(string str1, string str2) {
        if (str1.length() != str2.length()) return false;
        string rotatedStr = str2.substr(2) + str2.substr(0, 2);
        return str1 == rotatedStr;
    }
};

int main() {
    Solution solution;

    string str1 = "amazon";
    string str2 = "azonam";
    bool result = solution.isRotatedBy2PlacesAntiClockwise(str1, str2);
    cout << "Is Rotated by 2 Places Anti-Clockwise: " << result << endl;

    return 0;
}

/*Test Cases:
1. Input: "amazon", "azonam"
Expected Output: true
2. Input: "abcdef", "cdefab"
Expected Output: false
3. Input: "hello", "lohel"
Expected Output: false
4. Input: "geeks", "eksge"
Expected Output: true*/
