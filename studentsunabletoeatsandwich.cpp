// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include<queue>
using namespace std;
     void display(queue<int>q){
          int n=q.size();
    int i;
   for(i=0;i<n;i++){
    int x=q.front();
    cout<<x<<" ";
    q.pop();
    q.push(x);
    }
    return ;
    
}

int main() { int k=3;
           queue<int>b;
            b.push(1);
            b.push(1);
            b.push(1);
            b.push(0);
            b.push(0);
            b.push(1);
            vector<int>s;
            s.push_back(1);
            s.push_back(0);
            s.push_back(0);
            s.push_back(0);
            s.push_back(1);
            s.push_back(1);
            int count=0;
            int i=0;
            while(b.size()>0 && count!=b.size()){
                if(b.front()==s[i]) {
                    count=0;
                    b.pop();
                   i++;
                }
                else{ 
                    b.push(b.front());
                    b.pop();
                    count++;
                }
            }
            cout<<b.size();
           
       
          
            
  

    return 0;
}