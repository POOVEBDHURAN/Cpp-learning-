/*Rotate element upto k*/
#include <bits/stdc++.h>
#include <vector>
class Array {
public:
 std::vector<int> rotateArray(const std::vector<int>& arr, int k) {
 std::vector<int> rotated;
 int i;
 for(i=arr.size()-1;i>=0;i--)
 {
 rotated.push_back(arr[i]);
 }
 reverse(rotated.begin(),rotated.begin()+k%arr.size());
 reverse(rotated.begin()+k%arr.size(),rotated.end());
 return rotated;
 }
};
int main() {
 Array a;
 std::vector<int> arr = {1, 2, 3, 4, 5}; // Example input
 int k = 2; // Example input
 std::vector<int> rotated = a.rotateArray(arr, k);
 for (int num : rotated) {
 std::cout << num << " ";
 }
 std::cout << std::endl;
 return 0;
}
