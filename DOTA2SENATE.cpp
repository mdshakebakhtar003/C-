// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
#include<queue>
using namespace std;
int main() {        
            string s="DRDRRRD";
            queue<int>q;
            queue<int>R;
            queue<int>D;
           // char ch;
            for(int i=0;i<s.size();i++){
                q.push(i);
            }
            for(int i=0;i<s.size();i++){
                if(s[i]=='R') R.push(i);
                else if(s[i]=='D') D.push(i);
            }
            
            while(q.size()>1){
                if(s[q.front()]=='x') q.pop(); 
               else if(s[q.front()]=='R' && D.size()>0) {
                    D.pop();
                    q.push(q.front());
                    q.pop();
                    s[q.front()]=='x';
                } if(s[q.front()]=='x') q.pop(); 
                else if(s[q.front()]=='D' && R.size()>0) {
                    R.pop();
                    q.push(q.front());
                    q.pop();
                    s[q.front()]=='x';
                }
                else if(s[q.front()]=='R' && D.size()==0){ 
                    cout<<"Radiant";
               break;}
                else if(s[q.front()]=='D' && R.size()==0) {
                     cout<<"dire";
                     break;
                
            }
            }
           // if(s[q.front()]=='R') cout<<"Radiant";
            //else cout<<"Dire";

    return 0;
}