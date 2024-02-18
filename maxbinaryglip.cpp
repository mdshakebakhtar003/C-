// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
int main() {
    vector<vector<int>>v;
    vector<int>v1(1);
      vector<int>v2(1);
        vector<int>v3(1);
             v1.push_back(0);
              v1.push_back(0);
               v1.push_back(1);
                v1.push_back(1);
                 v2.push_back(1);
                  v2.push_back(0);
                   v2.push_back(1);
                    v2.push_back(0);
                     v3.push_back(1);
                      v3.push_back(1);
                       v3.push_back(0);
                        v3.push_back(0);
                         v.push_back(v1);
                          v.push_back(v2);
                           v.push_back(v3);
                           int i,j,k,l;
                        
                
                    
            for(i=0;i<=v.size()-1;i++){
                if(v[i][0]==0){
                for(j=0;j<=v1.size()-2;j++){
                    
                        if(v[i][j]==0) v[i][j]=1;
                        else v[i][j]=0;
                        
                    }}
                }
                    
                    for(j=0;j<=v1.size()-2;j++){ 
                         int noz=0;
                           int noo=0;
                     for(i=0;i<=v.size()-1;i++){
                       
                    if(v[i][j]==0) noz++;
                         else noo++;
                     
                         }
                          if(noz>noo){
                            for(i=0;i<=v.size()-1;i++){
                             if(v[i][j]==0) v[i][j]=1;
                             else v[i][j]=0;}}}
                        
                         int sum=0;
                         for(i=0;i<=v.size()-1;i++){
                              int x=1;
                for(j=v1.size()-2;j>=0;j--){
                    sum+=v[i][j]*x;
                    x*=2;}}
                         cout<<sum;
    return 0;
}