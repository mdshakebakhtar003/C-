// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
   int m,n,i,j,k,l;
            cout<<"enter m and n:";
            cin>>m>>n;
            int a[m][n];
            int b[m][n];
            cout<<"enter array elements:";
            for(i=0;i<=m-1;i++){
                for(j=0;j<=n-1;j++){
                    cin>>a[i][j];
                }}
               
                
                int t=0;
                int s=n-1;
                for(i=0;i<=m-1;i++){
                    for(t=0,s=n-1;t<=s;t++,s--){
                        int c=a[i][t];
                        a[i][t]=a[i][s];
                        a[i][s]=c;
                    }cout<<endl;
                }
                 for(i=0;i<=m-1;i++){
                    for(j=0;j<=n-1;j++){
                      b[i][j]=a[j][i];
                    }
                }
                  for(i=0;i<=m-1;i++){
                for(j=0;j<=n-1;j++){
                    cout<<b[i][j]<<" ";
                }
                      cout<<endl;
                  }
    return 0;
}