// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
   int n;
   cin>>n;
   int i,j,k,l,m,o;
   int nst=2;
   int nsp=n-1;
   for(i=1;i<=n-1;i++){
       for(j=1;j<=n-i;j++){
           cout<<"*";
       }
       for(k=1;k<=2*i-1;k++){
           cout<<" ";
       }
       for(int j=1;j<=n-i;j++){
           cout<<"*";
   }cout<<endl;
   }
    for(i=1;i<=n-2;i++){
   for(int j=1;j<=nst;j++){
     cout<<"*";
   }
   
    for(int j=1;j<=nsp;j++){
        cout<<" ";
    }nsp-=2;
     for(int j=1;j<=nst;j++){
     cout<<"*";
    
   }
    nst++;
    cout<<endl;

}
}