// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include<climits>
using namespace std;
class Maxheap{
    int j;
    vector<int>v;
   
    void downheapify(int idx,int bound){
        while(idx<v.size()){
        int lc=2*idx+1;
        int rc=2*idx+2;
        if(lc>=bound) break;
        int mx=idx;
        if( v[lc]>v[mx]) mx=lc;
         if(rc<bound and v[rc]>v[mx]) mx=rc;
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
        int top(){
            return v[0];
        }
      /*  void push(int val){
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
        }*/
        Maxheap(vector<int>hp){
           v=hp;
           int n=hp.size();
           //eiher this
           /*for(int i=0;i<v.size();i++){
               upheapify(i);
           }*/
           //or this
           j=n;
            for(int i=v.size()/2;i>=0;i--){
               downheapify(i,j);
           }
        }
   vector<int> heapsort (){
            int sz=v.size();
            while(sz>0){
                    //int x=top();
                    int el=0;
                    swap(v[el],v[j]);
                    j--;
                    sz--;
                    downheapify(0,j);

            }
            return v;

        }

            
            
};
void heapsort(vector<int>&hp){
    Maxheap m(hp);
    hp=m.heapsort();
   
}
int main() {
     vector<int>hp={9,6,1,19,3,2,8,12,5};
    //Maxheap hp(v);
    heapsort(hp);
    for(int i=0;i<hp.size();i++) cout<<hp[i]<<" ";
  
    
  
            

    return 0;
}