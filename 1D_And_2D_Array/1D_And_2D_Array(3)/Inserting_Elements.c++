/*  You are given an array of integers and an integer element. Your 
task is to insert the given element at a specific position in the array. 
The position is 0-based, meaning inserting at position 0 will place 
the element at the beginning of the array. If the position is greater 
than the array size, the element should be appended at the end. */

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
int* insertElement(int arr[], int n, int x, int pos, int& newSize) {
newSize=n+1;
int* result=new int[newSize];
int i,k=0;
for(i=newSize-1;i>=0;i--)
{
 if(i==pos)
 {
 result[i]=x;
 k++;
 }
 else if(k==1) result[i]=arr[i];
 else result[i]=arr[i-1];
}
return result;
}
};
int main() {
Solution sol;
int arr[] = {0, 0, 1, 0, 0, 2};
int n = sizeof(arr) / sizeof(arr[0]);
int x = 3; // Element to insert
int pos =4; // Position to insert at (0-indexed)
int newSize;
int* result = sol.insertElement(arr, n, x, pos, newSize);
cout << "Array after insertion: ";
for (int i = 0; i < newSize; i++) {
cout << result[i] << " ";
}
cout << endl;
// Don't forget to free the dynamically allocated memory
delete[] result;
return 0;
}

/*Test Cases
arr = {1, 2, 3, 5, 6}, element = 4, position = 3
result = {1, 2, 3, 4, 5, 6} 
arr = {10, 20, 30}, element = 5, position = 0
result = {5, 10, 20, 30}
arr = {7}, element = 10, position = 1
result = {7, 10}
arr = {}, element = 1, position = 0
result = {1}
arr = {1, 1, 1, 1}, element = 2, position = 2
result = {1, 1, 2, 1, 1}
arr = {5, 6, 7}, element = 8, position = 3
result = {5, 6, 7, 8} 
arr = {0, 0, 1, 0, 0, 2}, element = 3, position = 4
result = {0, 0, 1, 0, 3, 0, 2}
arr = {3, 3, 3, 3}, element = 4, position = 2
result = {3, 3, 4, 3, 3} */
