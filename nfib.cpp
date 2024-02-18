// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
  int i;
  int c=0;
  int a=1,b=1;
  for(i=1;i<=n;i++){    
       
      a=b;
      b=c;
     c=a+b; 
  cout<<c;
  } 
    return 0;
}