/*Diamond Pattern*/
#include <iostream>
using namespace std;
int main()
{
 int n=40;
 int i,j;
 for(i=0;i<n;i++,printf("\n")){
 for(j=0;j<n-1-i;j++){
 cout<<" ";
 }
 for(j=0;j<=i+i;j++){
 cout<<"*";
 }
 }
 for(i=n-2;i>=0;i--,printf("\n")){
 for(j=0;j<n-1-i;j++){
 cout<<" ";
 }
 for(j=0;j<=i+i;j++){
 cout<<"*";
 }
 }
 return 0;
}

