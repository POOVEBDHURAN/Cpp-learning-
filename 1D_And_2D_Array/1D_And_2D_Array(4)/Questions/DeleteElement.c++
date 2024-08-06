/*You are given an array of integers and a position pos. Your task is 
to delete an element from the array at the specified position and 
return the new array. if the position is invalid (i.e., out of bounds), 
return the original array.*/
class Solution {
public:
int* deleteElement(int arr[], int n, int pos, int& newSize) {
int* result;
// implement the logic here
return result;
}
};
int main() {
Solution sol;
int arr[] = {1, 2, 3, 4, 5};
int n = sizeof(arr) / sizeof(arr[0]);
int pos = 2; // Position to delete element from (0-indexed)
int newSize;
int* result = sol.deleteElement(arr, n, pos, newSize);
cout << "Array after deletion: ";
for (int i = 0; i < newSize; i++) {
cout << result[i] << " ";
}
cout << endl;
// Don’t forget to free the dynamically allocated memory
Delete[] result;
return 0;
}
/*Test Cases
Arr = {1, 2, 3, 4, 5}, pos = 2 -> result = {1, 2, 4, 5}
Arr = {10, 20, 30}, pos = 0 -> result = {20, 30}
Arr = {7, 8, 9}, pos = 2 -> result = {7, 8}
Arr = {3, 3, 7, 8}, pos = 1 -> result = {3, 7, 8}
Arr = {1, 2, 3, 4, 5}, pos = 5 -> result = {1, 2, 3, 4, 5} */
