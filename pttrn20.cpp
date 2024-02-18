#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i,j,k,l,m;
     int a=2;
    for(i=1;i<=n-1;i++){
         cout<<" ";
     }
     cout<<"1";
     cout<<endl;
    for(i=2;i<=n;i++){
         
        for(j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(k=1;k<=1;k++){
            cout<<i;
        }
        for(l=1;l<=2*(i-1)-1;l++)
        cout<<" ";
       
        for(l=1;l<=1;l++){
        cout<<a;
       } a++;
       cout<<endl;
    }
   
   
    return 0;
}