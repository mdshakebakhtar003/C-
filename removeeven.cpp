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
int main() { int i;
          queue<int>q;
 
            q.push(10);
            q.push(20);
            q.push(30);
            q.push(40);
            q.push(50);
            q.pop();
            display(q);
            cout<<endl;
            int n=q.size();
            for(i=0;i<n;i++){
                if(i%2==0){
                    q.pop();
                }
                else{
                    int x=q.front();
                  
                    q.push(x);
                      q.pop();
                }
            }
            display(q);
         
          

    return 0;
}