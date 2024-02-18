// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n;
   cin>>n;
   int nst=n-1;
   int nsp=1;
   int i,j,k,l;
   for(l=1;l<=2*n-1;l++) {cout<<"*";}
   cout<<endl;
   
   for(i=1;i<=n-1;i++){
       for(j=1;j<=nst;j++){
           cout<<"*";
       } 
       for(k=1;k<=nsp;k++){
           cout<<" ";
       }nsp+=2;
       for(j=1;j<=nst;j++){
           cout<<"*";
       } cout<<endl;
        nst--;
   }
  
    return 0;
}