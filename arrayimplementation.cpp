// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class queue{
    public:
    int f;
    int b;
    int a[5];
    //int size;
    queue(){
        f=0;
        b=0;
        //size=5;
    }
    void push(int val){
        if(b==5) cout<<"full";
        else{
            a[b]=val;
            b++;
        }
        return;
    }
    void pop(){
        if(b-f==0) return;
        f++;
    }
    int front(){
        if(b-f==0) return -1;
        return a[f];
        
    }
    int back(){
        if(b-f==0) return -1;
        return a[b-1];
    }
    int size(){
        return b-f;
    }
    bool empty(){
        if(b-f==0) return true;
        else return false;
    }
    void display(){
   
    for(int i=f;i<b;i++){
       cout<<a[i];
    }
    cout<<endl;
    return;
}
};

int main() { int i;
          queue q;
 
            q.push(10);
            q.push(20);
            q.push(30);
            q.push(40);
            q.push(50);
            q.pop();
            q.display();
            cout<<q.size()<<endl;
            cout<<q.front()<<endl;
            cout<<q.back()<<endl;
            cout<<q.empty()<<endl;
            cout<<endl;
            
         
          

    return 0;
}