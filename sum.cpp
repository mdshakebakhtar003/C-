// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
   int m,n,i,j;
   cout<<"enter size of arrays row m:";
   cin>>m;
   cout<<endl;
   cout<<"enter size of araays column n:";
cin>>n;
   int arr[m][n];
   cout<<"enter arrays element:";;
   for(i=0;i<=m-1;i++){
       for(j=0;j<=n-1;j++){
      cin>>arr[i][j];
       }
   }
   int sum=0;
     for(i=0;i<=m-1;i++){
       for(j=0;j<=n-1;j++){
           sum+=arr[i][j];
         }
     }
     cout<<sum;
    return 0;
}