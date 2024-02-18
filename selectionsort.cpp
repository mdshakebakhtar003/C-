// Online C++ compiler to run C++ program online
#include <iostream>
#include<limits.h>
using namespace std;
int main() {
            int i,j,k,n;
            cout<<"enter n";
            cin>>n;
            int a[n];
            cout<<"enter array elements";
            for(i=0;i<=n-1;i++){
                cin>>a[i];
            }
            for(i=0;i<n-1;i++){
                int min=INT_MAX;
                int mindx=-1;
                for(j=i;j<=n-1;j++){
                    if(min>a[j]) {min=a[j]; 
                    mindx=j;}
                    
                }
                int c=a[i];
                    a[i]=a[mindx];
                    a[mindx]=c;
            }
              for(i=0;i<=n-1;i++){
                  cout<<a[i];}
    return 0;
}