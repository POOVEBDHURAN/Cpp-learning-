/*)Given an array of size N containing only 0s, 1s, and 2s; sort the array 
in ascending order.*/
#include <bits/stdc++.h>
#include <vector>
using namespace std;
vector<int> sortArray012(vector<int>& arr) {
    sort(arr.begin(),arr.end());
    return arr;
}
int main() {
 // Example usage
 vector<int> arr = {1, 0, 2, 1, 0, 2, 1, 0};
 vector<int> sortedArr = sortArray012(arr);
 for(int i=0;i<arr.size();i++) cout<<sortedArr[i]<<" ";
 return 0;
}
/*Test cases:
1.Input:
[0, 0, 0, 0, 0]
Expected Output:
[0, 0, 0, 0, 0]
2.Input:
[1, 1, 1, 1, 1]
Expected Output:
[1, 1, 1, 1, 1]
3.Input:
[2, 2, 2, 2, 2]
Expected Output:
[2, 2, 2, 2, 2]
4.Input:
[0, 2, 1, 2, 0]
Expected Output:
[0, 0, 1, 2, 2]
5.Input:
[2, 1, 2, 0, 0]
Expected Output:
[0, 0, 1, 2, 2]
6.Input:
[1, 0, 2, 1, 0, 2, 1, 0]
Expected Output:
[0, 0, 0, 1, 1, 1, 2, 2]
7.Input:
[1, 1, 1, 2, 2, 2, 0, 0, 0]
Expected Output:
[0, 0, 0, 1, 1, 1, 2, 2, 2]
8.Input:
[1, -1, 2, 0, -2]
Expected Output:
[-2, -1, 0, 1, 2]
9.Input:
[42]
Expected Output:
[42]
10.Input:
[]
Expected Output:
[]*/
