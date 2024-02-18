// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() { int n,i,j;
            cin>>n;
            for(i=1;i<=n;i++){
                for(j=1;j<=i;j++){
                    cout<<(char)(j+'A'-1)<<" "; // cout<<(char)(j+64)<<" ";
                }cout<<endl;
            }
    
    
    
    
    
    
    return 0;
}