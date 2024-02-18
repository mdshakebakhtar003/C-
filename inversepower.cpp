// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() { int a,b;
    cout<< "enter a,b:";
    cin>>a>>b;
    int i;
    float power=1;
    int p;
    if(b<0) p=b;
    if(b<0) b=-b;
for(i=1;i<=b;i++){
    
   power=power*a;
  
}
if(p<0) power= 1 / power;
cout<<power;
return 0;
}