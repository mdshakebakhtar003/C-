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
                }
            }
            int minr=0;
            int maxr=m-1;
            int minc=0;
            int maxc=n-1;
            int tne=m*n;
            int count=0;
          while(minr<=maxr && minc<=maxc){
            for(j=minc;j<=maxc && count<tne;j++){
                cout<<a[minr][j];
               
            } minr++;
              count++;
            for(i=minr;i<=maxr &&count<tne;i++){
                cout<<a[i][maxc];
            }maxc--;
             count++;
            for(j=maxc;j>=minc &&count<tne;j--){
                cout<<a[maxr][j];
            }maxr--;
             count++;
            for(i=maxr;i>=minr &&count<tne;i--){
                cout<<a[i][minc];
            }minc++;
             count++;
             }

    return 0;
}