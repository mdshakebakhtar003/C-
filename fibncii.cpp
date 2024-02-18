// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n,i;
    cout<<"enter n:";
    cin>>n;
    int a=1,b=1,sum=0;
    for(i=3;i<=n;i++){
         sum=a+b;
        
        a=b;
        b=sum;
       
    }
    cout<<b;
    return 0;
}