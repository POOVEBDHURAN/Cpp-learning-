/*Given two integers N and M and a matrix of dimensions N*M. Count 
all the rows in a matrix that are sorted either in strictly increasing 
order or in strictly decreasing order.*/
#include <iostream>
#include <vector>
using namespace std;
int countSortedRows(vector<vector<int>>& mat) {
      int i,j,count,k,l,temp=0;
     for(i=0;i<mat.size();i++){
         count=0;
         for(j=0;j<mat[0].size()-1;j++){
             if(i!=l && mat[i][j]<mat[i][j+1]){
                 count++;
                 k=i;}
             else if(i!=k && mat[i][j]>mat[i][j+1]){
                 count++;
                 l=i;}
         }
         if(count==mat[0].size()-1) temp++;
     }
     return temp;
}
int main() {
 // Example usage
 vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
 int count = countSortedRows(matrix);
 cout << "Number of sorted rows: " << count << endl;
 return 0;
}
/*Test cases
1.Input Matrix:
[[1, 2, 3],
[4, 5, 6],
[7, 8, 9]]
Expected Output: Number of sorted rows: 3
2.Input Matrix:
[[9, 8, 7],
[6, 5, 4],
[3, 2, 1]]
Expected Output: Number of sorted rows: 3
3.Input Matrix:
[[1, 2, 3],
[7, 6, 5],
[8, 9, 4]]
Expected Output: Number of sorted rows: 2
4.Input Matrix:
[[1, 2, 3]]
Expected Output: Number of sorted rows: 1
5.Input Matrix:
[[1],
[2],
[3]]
Expected Output: Number of sorted rows: 3
Input Matrix:
[]
Expected Output: Number of sorted rows: 0
6.Input Matrix:
[[1, 1, 1],
[1, 1, 1],
[1, 1, 1]]
Expected Output: Number of sorted rows: 3
7.Input Matrix:
[[5, 6, 7],
[2, 3, 4],
[8, 9, 1]]
Expected Output: Number of sorted rows: 2*/
