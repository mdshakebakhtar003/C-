// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
int main() {
    vector<int>v;
    int n;
    cout<<"enter size  n:";
    cin>>n;
  
    for(int i=0;i<=n-1;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    
    int i=0;
    int j=v.size()-1;
    while(i<=j){
         
        if(v[j]==1) j--;
        if(v[i==0]) i++;
        if(i>j) break;
        if(v[j]==0 && v[i]==1){
        v[i]=0;
        v[j]=1;
        j--;
        i++;}
        
    }
    for(i=0;i<=v.size()-1;i++){
        cout<<v[i];}
    return 0;
    
}