// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
   int arr[12]={0,1,0,2,1,0,1,3,2,1,2,1};
   int brr[12];
   int crr[12];
   int drr[12];
   int i,j,k;
  for(i=0;i<=11;i++){
       int prevmax=arr[i-1];
       for(j=i-1;j>=-1;j--){ 
           if(arr[j]>prevmax){
               prevmax=arr[j];
           }
       }
       brr[i]=prevmax;
       cout<<brr[i];
   } cout<<endl;
   crr[12]=-1;
   for(i=0;i<=11;i++){
       int nextmax=arr[i+1];
       for(j=i+1;j<=11;j++){ 
           if(arr[j]>nextmax){
               nextmax=arr[j];
           }
       } crr[i]=nextmax;
       cout<<nextmax;
      
   } cout<<endl;
   for(k=0;k<=11;k++){
      drr[k]=min(crr[k],brr[k]);
      cout<<drr[k];
   } 
    return 0;
}