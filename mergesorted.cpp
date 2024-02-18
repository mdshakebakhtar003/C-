// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
  int a[6]={2,3,6,7,10,12};
  int b[4]={1,4,5,8};
  int c[6+4];
  int i=0,j=0,k=0;
  while(i<=5 && j<=3)
  {
      if(a[i]<b[j]) {c[k]=a[i];
      i++;
      k++;}
       else { c[k]=b[j];
      j++;
      k++;}
  }
  if(i==6){
      while(j<=3){
          c[k]=b[j];
          j++;
          k++;
         
      }
  }
   if(j==4){
      while(i<=5){
          c[k]=a[i];
          i++;
          k++;
      }
      }
  
  for(k=0;k<=9;k++) cout<<c[k];
    return 0;
}