// Online C compiler to run C program online
#include <iostream>
#include<queue>
#include<vector>
using namespace std;
int main() {int i;
int k=3;
           queue<int>q;
           vector<int>a;
          
            a.push_back(3);
             a.push_back(-4);
              a.push_back(-7);
               a.push_back(30);
                a.push_back(7);
                 a.push_back(-9);
                  a.push_back(2);
                   a.push_back(1);
                    a.push_back(6);
                     a.push_back(-1);
           vector<int >ans;
            for(i=0;i<9;i++){
                if(a[i]<0) q.push(i);
            }i=0;
            while(i<=7){
                while(q.size()>0 && q.front()<i) q.pop();
                if(q.size()==0 || q.front()>=i+k) ans.push_back(0);
                else ans.push_back(a[q.front()]);
                i++;
            }
            for(i=0;i<a.size();i++) cout<<a[i];
            cout<<endl;
             for(i=0;i<ans.size();i++) cout<<ans[i];
            
    
    

    return 0;
}