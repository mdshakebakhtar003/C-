// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n,i;
    cout<<"Enter n:";
    cin>>n;
    int sum=0;
    int rem;
   while(n>0){
       rem=n%10;
       sum=sum+rem;
       n/=10;
   }
   cout<<sum<<"is sum";
    return 0;
}