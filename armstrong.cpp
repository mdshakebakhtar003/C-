// Online C++ compiler to run C++ program online
#include <iostream>
#include<math.h>
using namespace std;
int main() {
    int n;
    cin>>n;
  int i;
 
 // int t=i and use in while loop for which i cannot be disturbed
  for(i=1;i<=n;i++){
     int sum=0;  int t=i;
 while(t>0){
     int ld=t%10;
     int x=pow(ld,3);
     sum=sum+x;
     t/=10;
  
 } if(sum==i) cout<<i<<endl;
 
      
  }
    return 0;
}