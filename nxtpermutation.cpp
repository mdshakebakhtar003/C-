// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
int main() { vector<int>arr;
 arr.push_back(2);
 arr.push_back(3);
 arr.push_back(1);
  
   int i,j;
   int idx=-1;
   for(i=1;i>=0;i--){
       if(arr[i]<arr[i+1]){
            idx=i;
            break;
       }
   }
   int jstg=0;
    for(i=0;i<=2;i++){
        if(arr[i]>arr[idx]){ jstg=i;
        break;
}}
if(idx==-1){ 
   for( i=0, j=2;i<=j;i++,j--){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
   }
   
}
for( i=idx+1, j=2;i<=j;i++,j--){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
   }
int temp=arr[idx+1];
arr[idx+1]=arr[jstg];
arr[jstg]=temp;
for(i=0;i<=2;i++) cout<<arr[i];
return 0;
}
