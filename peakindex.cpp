// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
            int i,j,k,n;
            cout<<"enter array size:";
            cin>>n;
            int a[n];
            cout<<"enter array elements:";
            for(i=0;i<=n-1;i++) cin>>a[i];
            int lo=1;
            int hi=n-2;
            
            bool flag=false;
            while(lo<=hi){
                            int mid=lo+(hi-lo)/2;
                        if(a[mid]>a[mid-1] && a[mid]>a[mid+1]) {
                            cout<<"peak index is"<<mid;
                            flag=true;
                            break;
                        }
                        else if(a[mid]<a[mid-1]) hi=mid-1;
                        else lo=mid+1;
                
                
            }
            
   

    return 0;
}