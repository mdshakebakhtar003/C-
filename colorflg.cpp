// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
int main() {
    vector<int>arr;
    int n,i;
    cout<<"enter size  n:";
    cin>>n;
  
    for(int i=0;i<=n-1;i++){
        int q;
        cin>>q;
        arr.push_back(q);
    }
    int noo=0,noz=0;
    for(i=0;i<=n-1;i++){
        if(arr[i]==0) noz++;
        if(arr[i]==1) noo++;
    }
   for(i=0;i<=n-1;i++){
       if(i<noz) arr[i]=0;
       else if(i<noz+noo) arr[i]=1;
       else arr[i]=2;
   }
   for(i=0;i<=n-1;i++){
       cout<<arr[i];
   }
    return 0;
    
}