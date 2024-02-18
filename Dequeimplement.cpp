// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
        
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
            void push_front(int val){
                 Node* temp=new Node(val);
                if(size==0){
                    head=tail=temp;
                }
               else{
                head->prev=temp;
                temp->next=head;
                head=temp;
                
               }
                size++;
            }
            void push_back(int val){
                 Node* temp=new Node(val);
                if(size==0){
                    head=tail=temp;
                }
               else{ 
                tail->next=temp;
                temp->prev=tail;
                tail=temp;
                
               }
                size++;
            }
            
            void pop_front(){
                if(size==0){
                    cout<<"underflow"<<endl;
                    return;
                }
                head=head->next;
                head->prev=NULL;
                size--;
            }
             void pop_back(){
                if(size==0){
                    cout<<"underflow"<<endl;
                    return;
                }
                tail=tail->prev;
                tail->next=NULL;
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
 
            q.push_back(10);
            q.push_back(20);
            q.push_back(30);
            q.push_front(40);
            q.push_front(50);
            q.pop_front();
            q.pop_back();
            q.display();
            cout<<q.Size()<<endl;
            cout<<q.front()<<endl;
            cout<<q.back()<<endl;
            cout<<q.empty()<<endl;
            cout<<endl;
            
    
    return 0;
}