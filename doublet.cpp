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
int x;
cout<<"enter the number which is equal to doublet sum";
cin>>x;
for(i=0;i<=v.size()-2;i++){
    for(j=i+1;j<=v.size()-1;j++){
        if(v[i]+v[j]==x) cout<<"("<<i<<","<<j<<")";
    }
}
    return 0;
}