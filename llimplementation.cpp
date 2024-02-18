// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(){
        this->val=val;
        this->next=NULL;
    }
};
class queue{
    public:
    Node*head;
    Node*tail;
    int size;
    queue(){
        head=tail=NULL;
        size=0;
    }
     void push(int val){
                 Node* temp=new Node(val);
                if(size==0){
                    head=tail=temp;
                }
               else{
                temp->next=tail;
                tail=temp;
               }
                size++;
            }
    void pop(){
        if(size==0){
            cout<<"empty";
            return;
        }
       else  {
           head=head->next;
           size--;
    }
    return;
    }
    int front(){
        if(size==0){
            cout<<"empty";
            return -1;
        }
        else return head->val;
    }
    int back(){
         if(size==0){
            cout<<empty;
            return -1;
        }
        else return tail->val;
    }
    int Size(){
        return size;
    }
    bool empty(){
        if(size==0) return true;
        else return false;
    }
    void display(){
        Node *temp=head;
        while(temp!=NULL){
            cout<<temp<<" ";
            temp=temp->next;
        }
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
            cout<<q.Size()<<endl;
            cout<<q.front()<<endl;
            cout<<q.back()<<endl;
            cout<<q.empty()<<endl;
            cout<<endl;
            
         
          

    return 0;
}