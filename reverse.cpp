// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n,i;
    cout<<"Enter n:";
    cin>>n;
    int rev=0;
    int rem=0;
   while(n>0){
       rev*=10;
       rem=n%10;
       rev+=rem;
       n/=10;
   }
   cout<<rev<<" is reverse";
    return 0;
}