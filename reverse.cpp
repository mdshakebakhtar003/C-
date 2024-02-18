// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
int main() {
   int n;
   cout<<"enter array size";
   cin>>n;
      vector<int>v;
      
   int i,j;
cout<<"enter array elements";
   for(i=0;i<=n-1;i++){
       int q;
       cin>>q;
    v.push_back(q);
   }
   vector<int>u(v.size());
for(i=0;i<=v.size()-1;i++){
    u[i]=v[v.size()-i-1];}
    for(i=0;i<=v.size()-1;i++){
        cout<<u[i];}

    
}