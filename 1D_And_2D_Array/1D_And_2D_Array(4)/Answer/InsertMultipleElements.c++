/*You are given an array of integers and another array containing 
elements that need to be inserted into the first array starting at a 
specific position. Write a function that inserts all the elements from 
the second array into the first array at the specified position and 
returns the new array.*/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
int* insertMultipleElements(int arr[], int n, int elements[], int m, int 
pos, int& newSize) {
int* result;
int i,j=0,k=pos;
newSize=n+m;
result=new int[newSize];
for(i=0;i<newSize;i++){
 if(i>=pos && j<m) result[i]=elements[j++];
 else if(i>pos) result[i]=arr[k++];
 else result[i]=arr[i];
}
return result;
}
};
int main() {
Solution sol;
int arr[]= {-10, -5, 0, 5};
int n = sizeof(arr) / sizeof(arr[0]);
int elements[] = {-3,2}; // Elements to insert
int m = sizeof(elements) / sizeof(elements[0]);
int pos = 2; // Position to insert at (0-indexed)
int newSize;
int* result = sol.insertMultipleElements(arr, n, elements, m, pos, 
newSize);
cout << "Array after insertion: ";
for (int i = 0; i < newSize; i++) {
cout << result[i] << " ";
}
cout << endl;
// Don’t forget to free the dynamically allocated memory
delete[] result;
return 0;
}

/*Test Cases
Arr = {1, 2, 3, 7, 8}, elements = {4, 5, 6}, pos = 3 -> result = {1, 2, 3, 4, 5, 6, 7, 8}
Arr = {10, 20, 30}, elements = {5, 15}, pos = 0 -> result = {5, 15, 10, 20, 30}
Arr = {7, 8, 9}, elements = {10, 11}, pos = 3 -> result = {7, 8, 9, 10, 11}
Arr = {3, 3, 7, 8}, elements = {4, 4}, pos = 2 -> result = {3, 3, 4, 4, 7, 8}
Arr = {-10, -5, 0, 5}, elements = {-3, 2}, pos = 2 -> result = {-10, -5, -3, 2, 0, 5} */
