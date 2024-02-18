// Online C compiler to run C program online
#include <iostream>
#include<stack>
using namespace std;
class queue{
    public:
      stack<int>st;
            stack<int>helper;

void push(int val){
                    if(st.size()==0){
                        st.push(val);
                    }
                    else{
                        while(st.size()>0){
                        helper.push(st.top());
                        st.pop();}
                       st.push(val);
                       while(helper.size()>0){
                           st.push(helper.top());
                           helper.pop();
                           
                       }}
                       return;
}
void pop(){
    int x=st.top();
    st.pop();
    
}
int top(){
    return st.top();
}};
int main() {
    queue q;
          
            q.push(1);
            q.push(2);
            q.push(3);
            q.push(4);
           q.pop();
            cout<<q.top();
            
    
    

    return 0;
}