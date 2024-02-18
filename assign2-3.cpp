// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
   int m,n,i,j,k,l;
            cout<<"enter m and n:";
            cin>>m>>n;
            int a[m][n];
            cout<<"enter array elements:";
            for(i=0;i<=m-1;i++){
                for(j=0;j<=n-1;j++){
                    cin>>a[i][j];
                }}
                for(j=0;j<=n-1;j++){
                    if(j%2==0){
                    for(i=m-1;i>=0;i--){
                        cout<<a[i][j];
                    }
                }
                else{
                     for(i=0;i<=m-1;i++){
                        cout<<a[i][j];
                    }
                }
                }
               
    return 0;
}