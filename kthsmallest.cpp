// Online C++ compiler to run C++ program online
#include <iostream>
#include<limits.h>
using namespace std;
int main() { int n,i,j,k;
            cout<<"enter array size:";
            cin>>n;
            int a[n];
            cout<<"enter array elements:";
            for(i=0;i<=n-1;i++) cin>>a[i];
            cout<<"enter kth smallest element u want to find";
            cin>>k;
            int min;
            for(i=0;i<=k-1;i++){
                 min=INT_MAX;
                int mindx=-1;
                for(j=i;j<=n-1;j++){
                    if(a[j]<min){ min=a[j];
                    mindx=j;}
                    
                }
                int c=a[i];
                    a[i]=a[mindx];
                    a[mindx]=c;
            }
            cout<<min;
    
    return 0;
}