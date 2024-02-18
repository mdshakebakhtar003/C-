// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
   int m,n,i,j,k,p,q;
   cout<<"enter m:and n";
   cin>>m>>n;
    cout<<"enter p and q:";
   cin>>p>>q;
   int a[m][n];
   int b[p][q];
   int c[m][q];
  
   if(n!=p){cout<<"multiplication not possible";}
   else { 
cout<<"enter array a elements:";
for(i=0;i<=m-1;i++){
    
    for(j=0;j<=n-1;j++){
        cin>>a[i][j];
    }}
cout<<"enter array b elements:";
for(i=0;i<=p-1;i++){
    for(j=0;j<=q-1;j++){
        cin>>b[i][j];
    }
}
for(i=0;i<=m-1;i++){
    for(j=0;j<=q-1;j++){
         c[i][j]=0;
        for(k=0;k<=p-1;k++){
            c[i][j]+=a[i][k]*b[k][j];
        }
    }
}}
for(i=0;i<=m-1;i++){
    for(j=0;j<=q-1;j++){
        cout<<c[i][j]<<" ";
    }cout<<endl;
}
    return 0;
}