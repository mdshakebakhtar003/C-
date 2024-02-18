// Online C++ compiler to run C++ program online
#include <iostream>
#include<stack>
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
           queue<int>q;
            stack<int>st;
            q.push(1);
            q.push(2);
            q.push(3);
            q.push(4);
            q.push(5);
            q.push(6);
           int n=q.size();
            for(int i=0;i<k;i++){
                int x=q.front();
                st.push(x);
                q.pop();
            }
            while(st.size()>0){
                q.push(st.top());
                st.pop();
            }
            for(int i=0;i<n-k;i++){
                q.push(q.front());
                q.pop();
            }
       
            display(q);
            
  

    return 0;
}