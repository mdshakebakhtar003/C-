// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n,i;
    cout<<"Enter n:";
    cin>>n;
    int sum=0;
   for(i=1;i<=n;i++){
       if(i%2==0) sum+=-i;
       else sum+=i;
   }
   cout<<sum<<" is sum";
    return 0;
}