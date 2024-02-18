// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
   int arr[6]={0,1,2,3,1,2};
   int i,j;
   for(i=0;i<=5;i++){
       int max=arr[i-1];
       for(j=i-1;j>=-1;j--){ 
           if(arr[j]>max){
               max=arr[j];
           }
       } cout<<max;
      
       
   }
    return 0;
}