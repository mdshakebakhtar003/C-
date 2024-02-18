// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() { int n,i,j,k,m;
            cin>>n;
            for(i=1;i<=n;i++){
                int t=i;
                for(j=1;j<=i;j++){
                    cout<<t;
                    t--;
                   
                }cout<<endl;
            }
    return 0;
}