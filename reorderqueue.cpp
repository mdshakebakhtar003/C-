// Online C++ compiler to run C++ program online
#include <iostream>
#include<stack>
#include<queue>
using namespace std;
void display(queue<int>q){
    int n=q.size();
    for(int i=0;i<n;i++){
    int x=q.front();
        cout<<x ;
        q.pop();
        q.push(x);
    }
}
int main() {        
            queue<int>q;
            q.push(1);
             q.push(2);
              q.push(3);
               q.push(4);
                q.push(5);
                 q.push(6);
                  q.push(7);
                   q.push(8);
                    //q.push(9);
                  //   q.push(10);
                     stack<int>st;
                     int n=q.size();
                     //int i=0;
                    for(int i=0;i<n/2;i++){
                         st.push(q.front());
                         q.pop();
                        // i++;
                     }
                     while(st.size()>0){
                         q.push(st.top());
                         st.pop();
                     }// i=0;
                     for(int i=0;i<n/2;i++){
                         st.push(q.front());
                         q.pop();
                        // i++;
                     }
             while(st.size()>0){
                         q.push(st.top());
                           st.pop();
                         q.push(q.front());
                           q.pop();
                       
                     }
                      while(q.size()>0){
                         st.push(q.front());
                         q.pop();
                     }// i=0;
                      while(st.size()>0){
                         q.push(st.top());
                         st.pop();
                     }// i=0;
                     display(q);
    return 0;
}