// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() { int i;
   int n;
   cout<<"enter n:";
   cin>>n;
   int x;
   cout<<"enter x:";
   cin>>x;
   int arr[n];
   cout<<"enter elements of array:";
   for(i=0;i<=n-1;i++){
       cin>>arr[i];
   }
   bool flag=false;
   for(i=0;i<=n-1;i++){
       if(arr[i]==x){ cout<<"index is "<<i<<endl;
       flag=true;
       }
   }
   if(flag==false) cout<<"element absent";
    return 0;
}