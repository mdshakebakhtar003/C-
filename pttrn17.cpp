#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i,j,k,l,m;
     
    for(m=1;m<=2*n-1;m++){
       if(m<=n)
        cout<<m;
        else
        cout<<2*n-m;
    }cout<<endl;
    for(i=1;i<=n-1;i++){
        for(j=1;j<=n-i;j++){
            cout<<j;
        }
        for(k=1;k<=2*i-1;k++){
            cout<<" ";
           
        }
        for(l=n-i;l>=1;l--){
            cout<<l;
         
        }cout<<endl;
    }
    return 0;
}