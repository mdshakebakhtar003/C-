// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main() { int i,j,k;
    vector<int>v(150,1000);
    string s;
    cin>>s;
    string t;
    cin>>t;
    bool flag=true;
    for(i=0;i<s.length();i++){
        int idx=(int)s[i];
        if(v[idx]==1000) v[i]=s[i]-t[i];
        else if(v[idx]!=s[i]-t[i]) flag=false;
        //else flag=false;
    } 
    for(int i=0;i<150;i++){
        v[i]=1000;
    }
    if(flag==true){
    for(i=0;i<s.length();i++){
        int idx=(int)t[i];
        if(v[idx]==1000) v[i]=t[i]-s[i];
        else if(v[idx]!=t[i]-s[i]) cout<<false;
        // else flag=false;
    } }
    cout<<flag;
    return 0;
}