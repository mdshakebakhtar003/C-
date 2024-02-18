// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
 int i,j;
 int a[3][3]={1,2,3,4,5,6,7,8,9};
 for(i=0;i<=2;i++){
     for(j=i+1;j<=2;j++){
        
         int temp=a[i][j];
         a[i][j]=a[j][i];
         a[j][i]=temp;
 
     }
 }
 for(i=0;i<=2;i++){
     for(j=0;j<=2;j++){ cout<<a[i][j];
     }cout<<endl;
 }
    return 0;
}