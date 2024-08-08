/*)Given an array arr[] of n integers. Check whether it contains a triplet 
that sums up to zero. Return true, if there is at least one triplet 
following the condition else return false.*/
#include <iostream>
#include <unordered_set>
using namespace std;

class Solution {
public:
 bool findTriplets(int arr[], int n) {
      int i,j,k,sum=0;
      for(i=0;i<n;i++){
          for(j=i+1;j<n;j++){
              for(k=j+1;k<n;k++){
                  sum=arr[i]+arr[j]+arr[k];
                  if(sum==0)
                      return true;
              }
          }    
      }
      return false;
 }
};
int main() {
 int arr[] = {1,2,-3,4,-1};
 int n = sizeof(arr) / sizeof(arr[0]);
 Solution sol;
 cout << "Triplets with zero sum exist: " << (sol.findTriplets(arr, n) ? "Yes" : "No") << endl;
 return 0;
}

/*Test cases:
1)Input: n = 5, arr[] = {0, -1, 2, -3, 1} Output: 1
2)Input: n = 3, arr[] = {1, 2, 3} Output: 0
3)Input: int arr1[] = {1, 2, -3, 4, -1}; Output:Yes
4)Input: int arr2[] = {0, 1, 2}; Output:No
5)Input: int arr3[] = {3, -1, -7, 5, 2};Output:Yes
6)Input: int arr4[] = {1, 2, 3, 4, 5}; Output:No*/
