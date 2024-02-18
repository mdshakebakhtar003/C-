// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
void reverse(int i,int j,vector<int>&v){
    int t,k,temp;
    for(t=i,k=j;t<=k;t++,k--){
    
        temp=v[t];
        v[t]=v[k];
        v[k]=temp;
    }
     
}
int main() {
   int n;
   cout<<"enter array size";
   cin>>n;
      vector<int>v;
      
   int i,j,temp;
cout<<"enter array elements";
   for(i=0;i<=n-1;i++){
       int q;
       cin>>q;
    v.push_back(q);
   }
   cout<<"enter k times to rotate";
   int k;
   cin>>k;
   if(k>n) k=k%n;
   reverse(0,n-k-1,v);
    reverse(n-k,n-1,v);
     reverse(0,n-1,v);
   
   for(i=0;i<=v.size()-1;i++){
        cout<<v[i];
    }

    return 0;
}