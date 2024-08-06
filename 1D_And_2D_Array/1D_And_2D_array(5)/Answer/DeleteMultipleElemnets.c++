/*)Given an array of integers and a list of indices, your task is to 
delete the elements at these specified indices and return the modified 
array.*/
#include <iostream>
using namespace std;
class Solution {
public:
 int* deleteElements(int arr[], int& n, int indices[], int m) {
 int* result;
 int i,j=0,k=0;
 result=new int[n-m];
 for(i=0;i<n;i++){
     if(i!=indices[j]) result[k++]=arr[i];
     if(i==indices[j]) j++;
}
 n-=m;
 return result;
 }
};
int main() {
 Solution sol;
 int arr[] = {7, 9, 3, 2, 1, 6, 5, 8};
 int n = 8;
 int indices[] = {0, 2, 4, 7};
 int m = 4;
 int* result = sol.deleteElements(arr, n, indices, m);
 cout << "Modified array: ";
 for (int i = 0; i < n; i++) {
 cout << result[i] << " ";
 }
 cout << endl;
 return 0;
}

/*Test Cases
1)Input: arr = [7, 9, 3, 2, 1, 6, 5, 8], indices = [0, 2, 4, 7]
Expected Output: [9, 2, 6, 5]
2)Input: arr = [11, 23, 45, 67, 89, 10, 15, 19, 29], indices = [1, 3, 6, 8]
Expected Output: [11, 45, 89, 10, 19]
3)Input: arr = [100, 200, 300, 400, 500], indices = [0, 1, 2, 3, 4]
Expected Output: []
4)Input: arr = [99, 1, 3, 99, 99, 7, 8, 9, 99, 10], indices = [0, 3, 4, 8]
Expected Output: [1, 3, 7, 8, 9, 10]
5)Input: arr = [12, 14, 16, 18, 20], indices = [2, 4]
Expected Output: [12, 14, 18]*/
