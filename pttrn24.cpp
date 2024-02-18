#include <iostream>
using namespace std;
int main() {
    int m,n;
    cin>>n;
    int i,j,k;
    for(i=1;i<=n+1;i++){
        for(j=1;j<=2*n+1;j++){
            if(i+j==n+2 || j==n+i || i==n+1 || j==n+1) cout<<"*";
            else cout<<" ";
        }cout<<endl;
    }
    for(int i = 1;i<= n; i++) {
for(int j = 1; j <=2*n+1; j++) {
    if(i+j==2*n+1 || j==i+1 || j==n+1) cout<<"*";
    else cout<<" ";}cout<<endl;


   
   
}
}