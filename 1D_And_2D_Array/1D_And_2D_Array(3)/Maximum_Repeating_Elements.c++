/* You are given an array of integers. Write a function to find and 
return a vector of elements that occur the maximum number of 
times in the array. */

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
vector<int> findMaxRepeatingElements(const vector<int>& arr)
{
 vector<int> result;
 /*==================================================
 Both Answers are correct check what you pefer
 ===================================================**/
 // map<int,int>mp;
 // int i,k=0,h=0;
 // for(i=0;i<arr.size();i++){
 // mp[arr[i]]++;
 // }
 // for(auto j:mp)
 // {
 // if(j.second>=k)
 // {
 // h=k;
 // k=j.second;
 // }
 // }
 // for(auto s:mp){
 // if(k==s.second) result.push_back(s.first);
 // }
 int i,j,count,k=0,max=INT_MIN;
 vector<int> a,b;
 for(i=0;i<arr.size();i++)
 {
 count=0;
 for(j=i;j<arr.size();j++)
 {
 if(arr[i]==arr[j]) count++;
 }
 if(count>=k)
 {
 k=count;
 a.push_back(arr[i]);
 b.push_back(k);
 }
 }
 for(i=0;i<b.size();i++)
 {
 if(max<b[i]) max=b[i];
 }
 for(i=0;i<b.size();i++)
 {
 if(max==b[i])
 {
 result.push_back(a[i]);
 }
 }
 return result;
 }
};
int main() {
Solution sol;
vector<int> arr = {1, 3, 2, 3, 4, 1, 3};
vector<int> result = sol.findMaxRepeatingElements(arr);
cout << "Elements with maximum frequency: ";
for (int num : result) {
cout << num << " ";
}
cout << endl;
return 0;
}

/* Test Cases
arr = {1, 3, 2, 3, 4, 1, 3} -> result = {3}
arr = {5, 1, 2, 3, 4, 5, 6, 7, 8, 5} -> result = {5} 
arr = {4, 4, 2, 2, 3, 3} -> result = {4, 2, 3}
arr = {10, 20, 30, 40} -> result = {10, 20, 30, 40}
arr = {8, 9, 8, 10, 9, 10, 10, 11} -> result = {10}
arr = {2, 3, 2, 3, 4, 4, 4, 5, 5, 5, 5} -> result = {5}
arr = {2, 3, 3, 5, 2, 2, 3, 2} -> result = {2}
arr = {6, 7, 6, 7, 8, 8, 6, 8, 8} -> result = {8}
arr = {-1, -1, 2, 2, -1, 3, 3, 3} -> result = {3}
arr = {4, 4, 4, 4, 4} -> result = {4} */
