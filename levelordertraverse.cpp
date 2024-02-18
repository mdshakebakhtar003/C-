#include <iostream>
#include<climits>
#include<algorithm>
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
void nthlevel(Treenode* root,int curr,int level) {
    if (root  == NULL)  return;
    if(curr==level){ cout << root->val << " ";
    return;}
    nthlevel(root->lc,curr+1,level);
    nthlevel(root->rc,curr+1,level);
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
void levelorder_traversal(Treenode*root){
    int n=levels(root);
    for(int i=1;i<=n;i++){
        nthlevel(root,1,i);
        cout<<endl;
    }

}

int main() {
    Treenode* a = new Treenode(1);
    Treenode* b = new Treenode(2);
    Treenode* c = new Treenode(3);
    Treenode* d = new Treenode(4);
    Treenode* e = new Treenode(5);
    Treenode* f = new Treenode(6);
    Treenode* g = new Treenode(7);

    a->lc = b;
    a->rc = c;
    b->lc = d;
    b->rc = e;
    c->lc = f;
    c->rc = g;
    cout<<sum(a)<<endl;
     cout<<size(a)<<endl;
     cout<<maxnode(a)<<endl;
     cout<<levels(a)<<endl;
    nthlevel(a,1,3);
    cout<<endl;
    levelorder_traversal(a);


    return 0;
}
