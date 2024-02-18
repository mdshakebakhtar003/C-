// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
        
    }
};
class queue{
    public:
            Node* head;
            Node* tail;
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
                tail->next=temp;
                tail=temp;
                
               }
                size++;
            }
            void pop(){
                if(size==0){
                    cout<<"underflow"<<endl;
                    return;
                }
                head=head->next;
                size--;
            }
            int front(){
                if(size==0){
                    cout<<"underflow";
                    return -1;
                }
               else return head->val;
            }
            int back(){
         if(size==0){
            cout<<"empty";
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
                Node* temp=head;
                while(temp!=NULL){
                    cout<<temp->val<<" ";
                    temp=temp->next;
                }
                cout<<endl;
                return;
            }
    
    
    
};
int main() {
            
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