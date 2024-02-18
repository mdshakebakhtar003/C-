// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
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
   
for(i=0,j=v.size()-1;i<=j;i++,j--){ 
    
        temp=v[i];
        v[i]=v[j];
        v[j]=temp;
    }
    for(i=0;i<=v.size()-1;i++){
        cout<<v[i];
    }

    return 0;
}

/*  int i=0
    int j=v.size()-1
    while(i<=j){
    swap
    i++;
    j--;
}
*/