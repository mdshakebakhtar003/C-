// Online C++ compiler to run C++ program online
#include <iostream>
#include<queue>
#include<stack>
using namespace std;
void display(queue<int>q){
    int i;
    int n=q.size();
    for(i=0;i<n;i++){
        int x=q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    return;
}
int main() {
            queue<int>q;
            q.push(10);
            q.push(20);
            q.push(30);
            q.push(40);
            q.push(50);
            q.pop();
            display(q);
            cout<<endl;
           stack<int>st;
           while(q.size()!=0){
               int x=q.front();
               st.push(x);
               q.pop();
           }
           while(st.size()!=0){
               q.push(st.top());
               st.pop();
           }
           display(q);

    return 0;
}