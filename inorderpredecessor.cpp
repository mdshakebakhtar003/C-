#include <iostream>
#include<climits>
#include<algorithm>
#include<queue>
using namespace std;
int sm=0;

class Treenode {
public:
    int val;
    Treenode* lc;
    Treenode* rc;

    Treenode(int val) {
        this->val = val;
        this->lc = NULL;
        this->rc = NULL;
    }
};

void display(Treenode* root) {
    if (root == NULL) {
        return;
    }
    cout << root->val << " ";
    display(root->lc);
    display(root->rc);
}
int sum(Treenode* root){
     if (root == NULL) {
        return 0;
    }
    sm+=root->val;
    sum(root->lc);
    sum(root->rc);
    return sm;
}
int sz=0;
int size(Treenode* root){
     if (root == NULL) {
        return 0;
    }
    sz++;
    size(root->lc);
    size(root->rc);
    return sz;
}
 int mx=INT_MIN;
int maxnode(Treenode* root){
     if (root == NULL) {
        return 0;
    }
    mx=max(mx,root->val);
    maxnode(root->lc);
    maxnode(root->rc);
    return mx;

}
int levels(Treenode*root){
    if(root==NULL) return 0;
    return 1+max(levels(root->lc),levels(root->rc));
}
Treenode* construct(int a[],int n){
        Treenode*root=new Treenode(a[0]);
        queue<Treenode*>q;
        q.push(root);
        int i=1;
        int j=2;
        while(q.size()>0 && i<n){
            Treenode*t=q.front();
            q.pop();
            Treenode*l;
            Treenode*r;
           if(a[i]!=INT_MIN) l=new Treenode(a[i]);
           else l=NULL;
            if(j!=n && a[j]!=INT_MIN)r=new Treenode(a[j]);
            else r=NULL;
            t->lc=l;
            t->rc=r;
            if(l!=NULL) q.push(l);
            if(r!=NULL) q.push(r);
            i+=2;
            j+=2;}
            return root;
}
int predecessor(Treenode* root){
    if(root->lc==NULL) return INT_MIN;
    Treenode* pred=root->lc;
    while(pred->rc!=NULL){
        pred=pred->rc;
    }
    return pred->val;

}


int main() {
   /* Treenode* a = new Treenode(1);
    Treenode* b = new Treenode(2);
    Treenode* c = new Treenode(3);
    Treenode* d = new Treenode(4);
    Treenode* e = new Treenode(9);
    Treenode* f = new Treenode(6);
    Treenode* g = new Treenode(7);

    a->lc = b;
    a->rc = c;
    b->lc = d;
    b->rc = e;
    c->lc = f;
    c->rc = g;*/
     int ar[]={1,0,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8,9};
     int n=sizeof(ar)/sizeof(ar[0]);
    Treenode*a=construct(ar,n);
   /* cout<<sum(a)<<endl;
     cout<<size(a)<<endl;
     cout<<maxnode(a)<<endl;
     cout<<levels(a)<<endl;
    
    display(a);*/
    cout<<predecessor(a);
    return 0;
}
