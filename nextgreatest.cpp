// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
   int arr[12]={0,1,0,2,1,0,1,3,2,1,2,1};
   int i,j;
   for(i=0;i<=11;i++){
       int max=arr[i+1];
       for(j=i+1;j<=11;j++){ 
           if(arr[j]>max){
               max=arr[j];
           }
       } cout<<max;
      
       
   }
    return 0;
}