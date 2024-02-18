// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include<sstream>
#include<algorithm>
using namespace std;
int main() {   int i,j,k;
               vector<string>v;
                string str;
                getline(cin,str);
                stringstream ss(str);
                string temp;
                while(ss>>temp){
                    v.push_back(temp);
                }
                sort(v.begin(),v.end());
                int count=1;
                int maxcount=1;
                for(i=1;i<=v.size()-1;i++){
                    if(v[i]==v[i-1]) count++;
                    else count= 1;
                    maxcount=max(maxcount,count);
                }
                count=1;
      for(i=1;i<=v.size()-1;i++){
                    if(v[i]==v[i-1]) count++;
                    else count=1;
                    if(maxcount==count) cout<<v[i]<<" "<<maxcount<<endl;}
    
    
    return 0;
}