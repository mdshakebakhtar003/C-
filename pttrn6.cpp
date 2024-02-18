// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() { int n,i,j,m;
            cin>>m>>n;
            for(i=1;i<=m;i++){
                for(j=1;j<=n;j++){
                    if(i==1 || i==m || j==1 || j==n) cout<<"*";
                    else cout<<" ";
                }cout<<endl;
            }
            
           
                    
                
            
            
    
    return 0;
}