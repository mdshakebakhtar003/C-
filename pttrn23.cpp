#include <iostream>
using namespace std;
int main() {
    int m,n;
    cin>>m>>n;
    int i,j,k;
    for(i=1;i<=m;i++){
        for(j=1;j<=n+1;j++){
            if(i+j==m+1 || j==m+i-1 ) cout<<"*";
            else cout<<" ";
        }cout<<endl;
    }
    for(int i = 1;i<= m-1; i++) {
for(int j = 1; j <=n+1; j++) {
    if(i+j==n+1 || j==i+1) cout<<"*";
    else cout<<" ";}cout<<endl;


   
   
}
}