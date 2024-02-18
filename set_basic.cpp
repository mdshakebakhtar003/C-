#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int>s;
    s.insert(1);
     s.insert(1);
      s.insert(4);
       s.insert(6);
        s.insert(7);
        s.erase(6);
        for(int ele:s){
            cout<<ele<<" ";
        }
        cout<<endl;
        int x=17;
        if(s.find(x)!=s.end()) cout<<"exists"<<endl;
        else cout<<"not exist"<<endl;
        cout<<s.size();
    
   



}