// Online C++ compiler to run C++ program online
#include <iostream>
#include<queue>
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
           cout<<q.front()<<endl;
           cout<<q.back()<<endl;
           cout<<q.size()<<endl;
           cout<<q.empty()<<endl;
           display(q);
            

    return 0;
}