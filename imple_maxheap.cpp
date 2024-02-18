// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include<climits>
using namespace std;
class Maxheap{
    
    vector<int>v;
   
    void downheapify(int idx){
        while(idx<v.size()){
        int lc=2*idx+1;
        int rc=2*idx+2;
        if(lc>=v.size()) break;
        int mx=idx;
        if( v[lc]>v[mx]) mx=lc;
         if(rc<v.size() and v[rc]>v[mx]) mx=rc;
        if(mx!=idx){
            swap(v[idx],v[mx]);
            idx=mx;
        }
        else break;
        }
    }
    void upheapify(int ci){
        while(ci>0){
           int pi=(ci-1)/2;
            if(v[pi]<v[ci]){
                swap(v[pi],v[ci]);
                 ci=pi;
            }
           
            else {break;}
        }
        
    }
         public:
        void display(){
            cout<<"[";
            for(int i=0;i<v.size();i++){
                cout<<v[i]<<" ";
            }
            cout<<"]";
        }
        void push(int val){
            v.push_back(val);
            upheapify(v.size()-1);
        }
        void pop_Max(){
            if(v.size()==0) return;
            swap(v[0],v[v.size()-1]);
            v.pop_back();
            downheapify(0);}
        void pop_idx(int idx){
            if(v.size()==0) return;
            v[idx]=INT_MIN;
            swap(v[idx],v[v.size()-1]);
            v.pop_back();
            downheapify(idx);
        }
            
            
};
int main() {
    Maxheap hp;
    hp.push(3);
    hp.push(4);
    hp.push(11);
    hp.push(9);
    hp.push(14);
    hp.push(-1);
    hp.push(30);
    hp.push(44);
    hp.push(50);
   //hp.pop_idx(0);
    hp.pop_Max();
    hp.display();
            

    return 0;
}