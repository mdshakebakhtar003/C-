// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() { int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            //bracket compulsory in j+64
            cout<<(char)(j+64)<<" ";
  
        } cout<<endl;
    }
    return 0;
}