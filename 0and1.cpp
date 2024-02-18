// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
int main() {
    vector<int>v;
    int n;
    cout<<"enter size  n:";
    cin>>n;
    int i;
    for(i=0;i<=n-1;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    int noz;
    int noo;
    for(i=0;i<=v.size()-1;i++){
        if(v[i]==0) noz++;
        if(v[i]==1) noo++;
    }
    for(i=0;i<=noz-1;i++){
        cout<<"0";
    }
     for(i=noz;i<=noz+noo-1;i++){
        cout<<"1";
    }
    
    return 0;
    
}