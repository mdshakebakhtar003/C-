// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() { int i,j,k,n;
        cout<<"enter array size:";
        cin>>n;
         int a[n];
        cout<<"enter array elements:";
     for(i=0;i<=n-1;i++){
         cin>>a[i];}
       
    for(i=0;i<n-1;i++){
        bool flag=true;
        for(j=0;j<n-i-1;j++){
            if(a[j]==0){
            int temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            
                flag=false;
            }
        }
        if(flag==true) break;
    }
    
  for(j=0;j<=n-1;j++){ cout<<a[j];}
    return 0;
}

