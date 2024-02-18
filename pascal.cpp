// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int fac(int n){
    int prod=1;int i;
    for(i=1;i<=n;i++) prod*=i;
    return prod;
    
}
int combination(int n,int r){
    int ncr=fac(n)/(fac(r) *fac(n-r));
    return ncr;
}
int main() { int n;
 cin>>n;
 int i,j;
 for(i=0;i<=n;i++){
     for(j=0;j<=i;j++){
         cout<<combination(i,j)<<" ";
     }cout<<endl;
 }

    return 0;
}