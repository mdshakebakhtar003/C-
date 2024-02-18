#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
           vector<int>hp={9,6,1,19,3,2,8,12,5};
           int arr[]={9,6,1,19,3,2,8,12,5};
            //Direct PQ by pushing
       // priority_queue<int>hp; //maxheap
        // priority_queue<int,vector<int>,greater<int> >hp; //minheap
             //From vector
    priority_queue<int,vector<int>,greater<int> >minhp(hp.begin(),hp.end()); //minheap
             
             //from array
               priority_queue<int>maxhp(arr,arr+9); //maxheap
             
    /*hp.push(3);
    hp.push(4);
    hp.push(11);
    hp.push(9);
    hp.push(14);
    hp.push(-1);
    hp.push(30);
    hp.push(44);
    hp.push(50);*/
    cout<<maxhp.top()<<endl;
     cout<<minhp.top()<<endl;
     cout<<maxhp.size();
}