// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() { int i,j,k,n;
            cout<<"enter array size:";
            cin>>n;
            int a[n];
            cout<<"enter array elements:";
            for(i=0;i<=n-1;i++){
                cin>>a[i];
            }
            int lo=0;
            int hi=n-1;
            int target;
            cout<<"enter target";
            cin>>target;
            int t;
            bool flag=false;
            while(lo<=hi){
                int mid=lo+(hi-lo)/2;
                if(a[mid]==target){
                    cout<<a[mid-1];
                    flag=true;
                    break;
                }
                else if(a[mid]<target) { lo=mid+1;
                 t=a[mid];}
                else hi=mid-1;
              
            }
            if(flag==false)cout<<t;
    
    

    return 0;
}