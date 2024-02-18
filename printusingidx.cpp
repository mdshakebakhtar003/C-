  // Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
void print(vector<int>&v,int idx){ 
                   
                   if(idx==v.size()) { 
                    return;}
                  cout<<v[idx];
                     print(v,idx+1);
                    
     
}
                   
int main() { 
            int a[]={1,2,9,45,5,7};
           int n=sizeof(a)/sizeof(a[0]);
           vector<int>v(n);
           for(int i=0;i<=n-1;i++){
            v[i]=a[i];
           }
            print(v,0);
   
   
   
    return 0;
}