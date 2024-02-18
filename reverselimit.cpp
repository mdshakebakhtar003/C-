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
     for(i=0;i<=v.size()-1;i++){
        cout<<v[i];
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
   cout<<"enter range to reverse";
   int t,k;
   cin>>t>>k;
   reverse(t,k,v);
   

    return 0;
}