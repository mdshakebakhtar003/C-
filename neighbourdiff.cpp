// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
using namespace std;
int main() { int i,j,k;
            string s;
            cin>>s;
            int count=0;
            for(i=0;i<=s.size()-1;i++){
                if(s.size()==1) break;
                if(s.size()==2 && s[0]!=s[1]){
                    count=1;
                    break;
                }
                if(s[0]){
                    if(s[i]!=s[i+1]) count++;
                }
               else if(s[s.size()-1]){
                    if(s[i]!=s[i-1]) count++;
                }
                else if(s[i]!=s[i+1] && s[i]!=s[i-1]){
                    count++;
                }
                
            }
            cout<<count;
   
   
   
   
    return 0;
}