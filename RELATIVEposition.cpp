// Online C++ compiler to run C++ program online
#include<iostream>
#include<limits>
using namespace std;

int main() { int i,j,k;
            int n;
            int x=0;
            cout<<"enter size of array:";
            cin>>n;
            int a[n];
            cout<<"enter elements of array:";
            for(i=0;i<=n-1;i++){
                cin>>n;
            } for(i=0;i<n;i++){
                  int min=INT_MAX;
                  int mindx=-1;
                   
                 for(j=0;j<=n-1;j++){
                    if(a[j]>0) {
                     if(a[j]<min ) {
                        mindx=j;}
            
                 } }a[mindx]=-x;
                 x++;}
                 
                 for(i=0;i<=n-1;i++) {a[i]=-a[i]; 
                    cout<<a[i];}
    return 0;
}