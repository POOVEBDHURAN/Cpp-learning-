/*Find the Minimum Element in a 1D Array*/
#include <iostream>
class Solution {
public:
 static int findMinElement(int arr[], int size) {
 int minElement = 0; // Default value
 for(int i=0;i<size;i++){
 if(minElement==0 && i==0) minElement=arr[0];
 if(minElement>arr[i]) minElement=arr[i];
 }
 return minElement;
 }
};
int main() {
 int arr[] = {10, 20, 5, 15, 30}; // Example array
 int size = sizeof(arr) / sizeof(arr[0]);
 int minElement = Solution::findMinElement(arr, size);
 std::cout << "Minimum Element: " << minElement << std::endl;
 return 0;
}
