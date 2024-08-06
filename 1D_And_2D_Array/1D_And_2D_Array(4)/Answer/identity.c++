/*You are given a 2D square matrix of integers. Your task is to check 
whether the given matrix is an identity matrix or not. An identity 
matrix is a square matrix with ones on the main diagonal and zeros 
elsewhere.*/
#include <iostream>
using namespace std;
class Solution {
public:
bool isidentityMatrix(int matrix[][3], int size) {
bool result;
int i,j;
for(i=0;i<size;i++){
 for(j=0;j<size;j++){
 if((i!=j && matrix[i][j]!=0) || matrix[i][i]!=1){
 result=false;
 return result;}
 }
}
result=true;
return result;
}
};
int main() {
Solution sol;
int matrix[3][3] = {{1, 0, 0}, {0, 1, 0}, {1, 0, 1}};
int size = 3;
bool result = sol.isidentityMatrix(matrix, size);
if(result) {
cout << "The matrix is an identity matrix" << endl;
} else {
cout << "The matrix is not an identity matrix" << endl;
}
return 0;
}

/*Test Cases
Matrix = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}} -> result = true
Matrix = {{1, 0, 0}, {0, 1, 0}, {1, 0, 1}} -> result = false
Matrix = {{1, 0, 0}, {0, 0, 0}, {0, 0, 1}} -> result = false
Matrix = {{1, 1, 0}, {0, 1, 0}, {0, 0, 1}} -> result = false
Matrix = {{1, 0}, {0, 1}} -> result = true */
