// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i,j,k;
    int nst=1;
    int nsp=n-1;
    for(i=1;i<=n;i++){
        for(j=1;j<=nsp;j++){
            cout<<" ";
        }
        for(k=1;k<=nst;k++){
        cout<<"*";}
        cout<<endl;
    nsp--;
    nst+=2;
    }
    
    return 0;
}