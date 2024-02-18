// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void print(int a[],int n){ a[n];
                   if(n<0) return;
                     print(a,n-1);
                     cout<<a[n];
                    
     
}
                   
int main() { int n,i;
            cout<<"enter array size:";
            cin>>n;
            int a[n];
            cout<<"enter array elements:";
            for(i=0;i<=n-1;i++) cin>>a[i];
            print(a,n-1);
   
   
   
    return 0;
}
