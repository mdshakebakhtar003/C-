// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
   int m,n,i,j,k,p,q;
 cout<<"enter m and n:";
 cin>>m>>n;
  int a[m][n];
 cout<<"enter array elements:";
 for(i=0;i<=m-1;i++){
     for(j=0;j<=n-1;j++){
         cin>>a[i][j];
     }
 }
 for(i=m-1;i>=0;i--){
     if(i%2==0){
     for(j=0;j<=n-1;j++){
         cout<<a[i][j];
     }}
 
 else{
     for(j=n-1;j>=0;j--){
         cout<<a[i][j];
     }
 }}
    return 0;
}