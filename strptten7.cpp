// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n,i,j,k;
    cin>>n;
    for( i=1;i<=n;i++){
        for( j=1;j<=n;j++){
            if((i+j)>=n+1) cout<<"*";
            else cout<<" ";
          
        }cout<<endl;
    }
    return 0;
}