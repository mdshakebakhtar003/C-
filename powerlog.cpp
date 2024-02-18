// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int power(int a,int b){
    if(b==1) return a;

  if(b%2==0)  return power(a,b/2)*power(a,b/2);
    else return a*power(a,b/2)*power(a,b/2);
}
int main() { int a,b;
            cout<<"enter a nd b respectively:";
            cin>>a>>b;
           int pwr =power(a,b);
            cout<<pwr;
   
   
    return 0;
}